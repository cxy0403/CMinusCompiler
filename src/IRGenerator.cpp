#include "IRGenerator.h"
#include <fstream>
#include <iostream>

using namespace llvm;

IRGenerator* Generator; 
stack<llvm::BasicBlock *> GlobalAfterBB;

IRGenerator::IRGenerator(){
    this->module = new Module("main", context);
   
    //获取类型参数; 生成函数，链接外部C库函数
    std::vector<Type*> args;
    args.push_back(builder.getInt8PtrTy());
    auto PrintfType = FunctionType::get(builder.getInt32Ty(), makeArrayRef(args), true);
    printf = Function::Create(PrintfType, Function::ExternalLinkage, Twine("printf"), module);
    printf->setCallingConv(CallingConv::C);
    
    auto ScanfType = FunctionType::get(builder.getInt32Ty(), true);
    scanf = Function::Create(ScanfType, Function::ExternalLinkage, Twine("scanf"), module);
    scanf->setCallingConv(CallingConv::C);
}

IRGenerator::~IRGenerator(){
}

Function* IRGenerator::CurrentFunction(){
    return this->FunctionStack.top();
}

void IRGenerator::PushFunction(Function* f){
    this->FunctionStack.push(f);
}

void IRGenerator::PopFunction(){
    this->FunctionStack.pop();
}

Value* IRGenerator::FindValue(std::string name){
    //查找当前函数符号表。若空，查找全局变量
    Value* res = FunctionStack.top()->getValueSymbolTable()->lookup(name);
    if (res == nullptr){
        res = module->getGlobalVariable(name, true);
        if (res == nullptr){
            std::cout<<"[ERROR]Undeclared variable: " << name <<std::endl;
        }
    }
    return res;
}

Value* IRGenerator::typeCast(Value* src, Type* dst){
    Instruction::CastOps op = getCastInst(src->getType(), dst);
    return builder.CreateCast(op, src, dst, "tmptypecast");
}

Instruction::CastOps IRGenerator::getCastInst(Type* src, Type* dst){
    if (src == Type::getFloatTy(context) && dst == Type::getInt32Ty(context)) 
        return Instruction::FPToSI;
    else if (src == Type::getInt32Ty(context) && dst == Type::getFloatTy(context)) 
        return Instruction::SIToFP;
    else if (src == Type::getInt8Ty(context) && dst == Type::getFloatTy(context)) 
        return Instruction::UIToFP;
    else if (src == Type::getInt8Ty(context) && dst == Type::getInt32Ty(context)) 
        return Instruction::ZExt;
    else if (src == Type::getInt32Ty(context) && dst == Type::getInt8Ty(context)) 
        return Instruction::Trunc;
    else throw logic_error("[ERROR] Wrong typecast");
}

Type* IRGenerator::getLlvmType(int type, int arraySize){
    switch (type) {
        case TYPE_INT:
            return Type::getInt32Ty(context);
            break;
        case TYPE_INT_ARRAY:
            if (arraySize > 0) return ArrayType::get(Type::getInt32Ty(context), arraySize);
            else return Type::getInt32PtrTy(context);
            break;
        case TYPE_FLOAT:
            return Type::getFloatTy(context);
            break;
        case TYPE_FLOAT_ARRAY:
            if (arraySize > 0) return ArrayType::get(Type::getFloatTy(context), arraySize);
            else return Type::getFloatPtrTy(context);
            break;
        case TYPE_BOOL:
            return Type::getInt1Ty(context);
            break;
        case TYPE_BOOL_ARRAY:
            if (arraySize > 0) return ArrayType::get(Type::getInt1Ty(context), arraySize);
            else return Type::getInt1PtrTy(context);
            break;
        case TYPE_CHAR:
            return Type::getInt8Ty(context);
            break;
        case TYPE_CHAR_ARRAY:
            if (arraySize > 0) return ArrayType::get(Type::getInt8Ty(context), arraySize);
            else return Type::getInt8PtrTy(context);
            break;
        default:
            break;
    }
    return Type::getVoidTy(context);
}

void IRGenerator::Generate(Node* root) {
    cout<<"begin generate:"<<endl;
    ReadNode(root);
    module->print(outs(), nullptr);
}

Value* IRGenerator::ReadNode(Node* root){
    cout<<root->nodeType<<endl;
    if (root->isType("ExtDef")) {
        if (root->childNode[1]->isType("ExtDecList")) return ReadNodeVar(root);
        else return ReadNodeFunc(root);
    } else if (root->isType("Def")) return ReadNodeVar(root);
    
    int childNum = root->getChildNum();
    for ( int i = 0; i < childNum; i++) 
        if (root->childNode[i] != nullptr) ReadNode(root->childNode[i]);
    cout<<"first generate"<<endl;
    return NULL;
}

Value* IRGenerator::ReadNodeExp(Node* root){
    string child0str = root->childNode[0]->getNodeName();

    if (root->childNode[0]->isType("INT")) {
        return builder.getInt32(stoi(root->childNode[0]->getNodeName()));
    } 
    else if (root->childNode[0]->isType("FLOAT")) {
        return ConstantFP::get(builder.getFloatTy(), APFloat(stof(child0str)));
    }
    else if (root->childNode[0]->isType("BOOL")) {
        if (root->childNode[0]->isType("true")) return builder.getInt1(true);
        else return builder.getInt1(false);
    }
    else if (root->childNode[0]->isType("CHAR")) {
        // char --> '$ch'
        
        if (child0str.size() == 3)
            return builder.getInt8(child0str.at(1));
        else {
            if (root->childNode[0]->isName("'\\n'")) {
                return builder.getInt8('\n');
            } else if (root->childNode[0]->isName("'\\\\'")){
                return builder.getInt8('\\');
            } else if (root->childNode[0]->isName("'\\a'")){
                return builder.getInt8('\a');
            } else if (root->childNode[0]->isName("'\\b'")){
                return builder.getInt8('\b');
            } else if (root->childNode[0]->isName("'\\f'")){
                return builder.getInt8('\f');
            } else if (root->childNode[0]->isName("'\\t'")){
                return builder.getInt8('\t');
            } else if (root->childNode[0]->isName("'\\v'")){
                return builder.getInt8('\v');
            } else if (root->childNode[0]->isName("'\\''")){
                return builder.getInt8('\'');
            } else if (root->childNode[0]->isName("'\\\"'")){
                return builder.getInt8('\"');
            } else if (root->childNode[0]->isName("'\\0'")){
                return builder.getInt8('\0');
            } else {
                throw logic_error("[ERROR] char not defined: " + child0str);
            }
        }
    }
    else if (root->childNode[0]->isType("STRING")) {
        // string --> "$ch"
        string str = child0str.substr(1, child0str.length() - 2);
        Constant *strConst = ConstantDataArray::getString(context, str);
        Value *globalVar = new GlobalVariable(*module, strConst->getType(), true, GlobalValue::PrivateLinkage, strConst, "_Const_String_");
        vector<Value*> indexList;
        indexList.push_back(builder.getInt32(0));
        indexList.push_back(builder.getInt32(0));
        // var value
        Value * varPtr = builder.CreateInBoundsGEP(globalVar, ArrayRef<Value*>(indexList), "tmpvar");
        return varPtr;
        //return builder.getInt8(this->childNode[0]->nodeName->at(1));
    }
    else if (root->childNode[0]->isType("ID") ) {
        if (root->getChildNum() == 1) {
            // always return var value
            Value * varPtr = FindValue(child0str);
            if (varPtr->getType()->isPointerTy() && !(varPtr->getType()->getPointerElementType()->isArrayTy())) {
                return builder.CreateLoad(varPtr->getType()->getPointerElementType(), varPtr, "tmpvar");
            }
            else {
                return varPtr;
            }
            
        }
        // ID() function
        // ID[] array or point
        else if (root->getChildNum() == 3) {
            if (root->childNode[1]->isType("LP") ) {
                Function *fun = module->getFunction(child0str);
                if (fun == nullptr) {
                    throw logic_error("[ERROR] Funtion not defined: " + child0str);
                }
                return builder.CreateCall(fun, nullptr, "calltmp");
            }
            else {
                // var addr
                return FindValue(child0str);
            }
        }
        else if (root->getChildNum() == 4) {
            // ID LP Args RP
            if (root->childNode[1]->isType("LP") ) {
                if (root->childNode[0]->isName("print") ) {
                    return ReadNodePrint(root);
                }
                if (root->childNode[0]->isName("printf") ) {
                    return ReadNodePrintf(root);
                }
                if (root->childNode[0]->isName("scan") ) {
                    return ReadNodeScan(root);
                }
                if (root->childNode[0]->isName("scanf") ) {
                    throw logic_error("[ERROR] Funtion not defined: " + child0str);
                }
                Function *fun = module->getFunction(child0str);
                if (fun == nullptr) {
                    throw logic_error("[ERROR] Funtion not defined: " + child0str);
                }
                vector<Value*> *args = getArgs(root->childNode[2]);
                return builder.CreateCall(fun, *args, "calltmp");
            }
            else {
                Value * arrayValue = FindValue(child0str);
                Value * indexValue = ReadNodeExp(root->childNode[2]);
                if (indexValue->getType() != Type::getInt32Ty(context)) {
                    indexValue = this->typeCast(indexValue, Type::getInt32Ty(context));
                }
                vector<Value*> indexList;
                indexList.push_back(builder.getInt32(0));
                indexList.push_back(indexValue);
                // var value
                Value * varPtr = builder.CreateInBoundsGEP(arrayValue, ArrayRef<Value*>(indexList), "tmpvar");
                return builder.CreateLoad(varPtr->getType()->getPointerElementType(), varPtr, "tmpvar");
                //return builder.CreateLoad(builder.CreateInBoundsGEP(arrayValue, ArrayRef<Value*>(indexList)), "tmpvar");
            }
        }
    }
    else if (root->childNode[0]->isType("LP") ) 
        return ReadNodeExp(root->childNode[1]);
    else if (root->childNode[0]->isType("MINUS") ) 
        return builder.CreateNeg(ReadNodeExp(root->childNode[1]), "tmpNeg");

    else if (root->childNode[0]->isType("NOT") ) {
        Value * tmp = ReadNodeExp(root->childNode[1]);
        if (tmp->getType() != Type::getInt1Ty(context))
            throw logic_error("cannot use types other than bool in ! Exp");
        return builder.CreateNot(tmp, "tmpNot");
    }
    // Exp op Exp
    else {
        if (root->childNode[1]->isType("ASSIGNOP") ) {
            Value *left = ReadNodeAddr(root->childNode[0]);
            Value *right = ReadNodeExp(root->childNode[2]);
            if (right->getType() != left->getType()->getPointerElementType()) 
                right = this->typeCast(right, left->getType()->getPointerElementType());
            return builder.CreateStore(right, left);
        }
        else if (root->childNode[1]->isType("RELOP") ) {
            return ReadNodeRELOP(root);
        }
        else {
            Value *left = ReadNodeExp(root->childNode[0]);
            Value *right = ReadNodeExp(root->childNode[2]);
            if (root->childNode[1]->isType("AND") ) {
                if (left->getType() != Type::getInt1Ty(context) || right->getType() != Type::getInt1Ty(context)) 
                    throw logic_error("cannot use types other than bool in and exp");
                return builder.CreateAnd(left, right, "tmpAnd");
            }
            else if (root->childNode[1]->isType("OR") ) {
                if (left->getType() != Type::getInt1Ty(context) || right->getType() != Type::getInt1Ty(context)) 
                    throw logic_error("cannot use types other than bool in or exp");
                return builder.CreateOr(left, right, "tmpOR");
            }
            else {
                if (left->getType() != right->getType()) {
                    if (left->getType() == Type::getFloatTy(context)) {
                        right = this->typeCast(right, Type::getFloatTy(context));
                    } else {
                        if (right->getType() == Type::getFloatTy(context)) {
                            left = this->typeCast(left, Type::getFloatTy(context));
                        } else {
                            if (left->getType() == Type::getInt32Ty(context)) {
                                right = this->typeCast(right, Type::getInt32Ty(context));
                            } else if(right->getType() == Type::getInt32Ty(context)) {
                                left = this->typeCast(left, Type::getInt32Ty(context));
                            } else {
                                throw logic_error("cann't use bool in +-*/");
                            }
                        }
                    }
                }
                if (root->childNode[1]->isType("PLUS") ) return (left->getType() == Type::getFloatTy(context)) ? builder.CreateFAdd(left, right, "addtmpf") : builder.CreateAdd(left, right, "addtmpi");
                else if (root->childNode[1]->isType("MINUS") ) return (left->getType() == Type::getFloatTy(context)) ? builder.CreateFSub(left, right, "subtmpf") : builder.CreateSub(left, right, "subtmpi");
                else if (root->childNode[1]->isType("STAR") ) return (left->getType() == Type::getFloatTy(context)) ? builder.CreateFMul(left, right, "multmpf") : builder.CreateMul(left, right, "multmpi");
                else if (root->childNode[1]->isType("DIV") ) return (left->getType() == Type::getFloatTy(context)) ? builder.CreateFDiv(left, right, "divtmpf") : builder.CreateSDiv(left, right, "divtmpi");
            }
        }
    }
    return NULL;
}

// Specifier FunDec CompSt
Value* IRGenerator::ReadNodeFunc(Node* root){
    vector<pair<string, Type*>> *params = nullptr;
    vector<Type*> argTypes;
    // FunDec --> ID LP VarList RP
    if (root->childNode[1]->getChildNum() == 4) {
        params = getParam(root->childNode[1]->childNode[2]);
        for (auto it : *params) argTypes.push_back(it.second);
    }
    FunctionType *funcType = FunctionType::get(getLlvmType(root->childNode[0]->getValueType(), 0), argTypes, false);
    Function *function = Function::Create(funcType, GlobalValue::ExternalLinkage, root->childNode[1]->childNode[0]->getNodeName(), module);
    PushFunction(function);
    //Block
    BasicBlock *newBlock = BasicBlock::Create(context, "entrypoint", function);
    builder.SetInsertPoint(newBlock);
    //Parameters
    if(params != nullptr) {
        int index = 0;
        for (auto &Arg : function->args()) Arg.setName(params->at(index++).first);
    }
    //Sub routine
    ReadNodeCompSt(root->childNode[2]);
    //Pop back
    PopFunction();
    return function;
}

// ExtDef --> Specifier ExtDecList SEMI
// Def --> Specifier DecList SEMI
Value* IRGenerator::ReadNodeVar(Node* root){
    int type = root->childNode[0]->getValueType();
    vector<pair<string, int>> *nameList = getNameList(root->childNode[1], type);
    Type *llvmType;
    for (auto it : *nameList) {
        if (it.second == VAR) {
            llvmType = getLlvmType(type, 0);
        } else {
            llvmType = getLlvmType(type + ARRAY, it.second - ARRAY);
        }
        if (isStackEmpty()) {
            Value *tmp = module->getGlobalVariable(it.first, true);
            if(tmp != nullptr){
                throw logic_error("Redefined Variable: " + it.first);
            }
            GlobalVariable* globalVar = new GlobalVariable(*module, llvmType, false, GlobalValue::PrivateLinkage, 0, it.first);
            if (llvmType->isArrayTy()) {
                std::vector<Constant*> constArrayElem;
                Constant* constElem = ConstantInt::get(llvmType->getArrayElementType(), 0);
                for (int i = 0; i < llvmType->getArrayNumElements(); i++) {
                    constArrayElem.push_back(constElem);
                }
                Constant* constArray = ConstantArray::get(ArrayType::get(llvmType->getArrayElementType(), llvmType->getArrayNumElements()), constArrayElem);
                globalVar->setInitializer(constArray);
            } else {
                globalVar->setInitializer(ConstantInt::get(llvmType, 0));
            }
            //if (generator->Generator->module->getGlobalVariable(it.first, true) == nullptr) {
            //    cout<<"ERROR"<<endl;
            //}
        }
        else {            
            Value *tmp = FunctionStack.top()->getValueSymbolTable()->lookup(it.first);
            if(tmp != nullptr){
                throw logic_error("Redefined Variable: " + it.first);
            }            
            Value* alloc = CreateEntryBlockAlloca(CurrentFunction(), it.first, llvmType);
        }
    }
    return NULL;
}

// Stmt
Value* IRGenerator::ReadNodeStmt(Node* root){
    if (root->childNode[0]->isType("Exp")) return ReadNodeExp(root->childNode[0]);
    else if (root->childNode[0]->isType("IF")) return ReadNodeIf(root);
    else if (root->childNode[0]->isType("WHILE")) return ReadNodeWhile(root);
    else if (root->childNode[0]->isType("RETURN")) return ReadNodeReturn(root);
    else if (root->childNode[0]->isType("BREAK")) return builder.CreateBr(GlobalAfterBB.top());
    else if (root->childNode[0]->isType("CompSt")) return ReadNodeCompSt(root->childNode[0]);
    return NULL;
}

Value* IRGenerator::ReadNodeWhile(Node* root){
    Function *TheFunction = CurrentFunction();
    BasicBlock *condBB = BasicBlock::Create(context, "cond", TheFunction);
    BasicBlock *loopBB = BasicBlock::Create(context, "loop", TheFunction);
    BasicBlock *afterBB = BasicBlock::Create(context, "afterLoop", TheFunction);

    GlobalAfterBB.push(afterBB);
    //Cond
    builder.CreateBr(condBB);
    builder.SetInsertPoint(condBB);
    // WHILE LP Exp RP Stmt
    Value *condValue = ReadNodeExp(root->childNode[2]);
    condValue = builder.CreateICmpNE(condValue, ConstantInt::get(Type::getInt1Ty(context), 0, true), "whileCond");
    auto branch = builder.CreateCondBr(condValue, loopBB, afterBB);
    condBB = builder.GetInsertBlock();
    //Loop
    builder.SetInsertPoint(loopBB);
    ReadNodeStmt(root->childNode[4]);
    builder.CreateBr(condBB);
    //After
    builder.SetInsertPoint(afterBB);
    //this->backward(generator);
    GlobalAfterBB.pop();
    return branch;
}

// IF LP Exp RP Stmt %prec LOWER_THAN_ELSE
// IF LP Exp RP Stmt ELSE Stmt
Value* IRGenerator::ReadNodeIf(Node* root){
    Value *condValue = ReadNodeExp(root->childNode[2]), *thenValue = nullptr, *elseValue = nullptr;
    condValue = builder.CreateICmpNE(condValue, ConstantInt::get(Type::getInt1Ty(context), 0, true), "ifCond");

    Function *TheFunction = CurrentFunction();
    BasicBlock *thenBB = BasicBlock::Create(context, "then", TheFunction);
    BasicBlock *elseBB = BasicBlock::Create(context, "else", TheFunction);
    BasicBlock *mergeBB = BasicBlock::Create(context, "merge", TheFunction);

    // Then
    auto branch = builder.CreateCondBr(condValue, thenBB, elseBB);
    builder.SetInsertPoint(thenBB);
    thenValue = ReadNodeStmt(root->childNode[4]);
    builder.CreateBr(mergeBB);
    thenBB = builder.GetInsertBlock();

    // else
    builder.SetInsertPoint(elseBB);
    if (root->getChildNum() == 7) elseValue = ReadNodeStmt(root->childNode[6]);
    builder.CreateBr(mergeBB);
    elseBB = builder.GetInsertBlock();

    builder.SetInsertPoint(mergeBB);    
    return branch;
}

// RETURN Exp SEMI
// RETURN SEMI
Value* IRGenerator::ReadNodeReturn(Node* root){
    if (root->getChildNum() == 3) {
        auto returnInst = ReadNodeExp(root->childNode[1]);
        return builder.CreateRet(returnInst);
    }
    return builder.CreateRetVoid();
}

// CompSt --> LC DefList StmtList RC
// DefList --> Def DefList
// Def --> Specifier DecList SEMI
// StmtList --> Stmt StmtList
Value* IRGenerator::ReadNodeCompSt(Node* root){
    Node * defNodes = root->childNode[1];
    Node * stmtNodes = root->childNode[2];
    while (true) {
        if (defNodes != nullptr && defNodes->getChildNum() == 2) {
            ReadNodeVar(defNodes->childNode[0]);
            defNodes = defNodes->childNode[1];
        }
        else break;
    } 
    while (true) {
        if (stmtNodes != nullptr && stmtNodes->getChildNum() == 2) {
            ReadNodeStmt(stmtNodes->childNode[0]);
            stmtNodes = stmtNodes->childNode[1];
        }
        else break;
    }
    return NULL;
}

Value* IRGenerator::ReadNodeRELOP(Node* root){
    Value * left = ReadNodeExp(root->childNode[0]);
    Value * right = ReadNodeExp(root->childNode[2]);
    if (left->getType() != right->getType()) {
        if (left->getType() == Type::getFloatTy(context))
            right = this->typeCast(right, Type::getFloatTy(context));
        else {
            if (right->getType() == Type::getFloatTy(context))
                left = this->typeCast(left, Type::getFloatTy(context));
            else {
                if (left->getType() == Type::getInt32Ty(context)) 
                    right = this->typeCast(right, Type::getInt32Ty(context));
                else if(right->getType() == Type::getInt32Ty(context)) 
                    left = this->typeCast(left, Type::getInt32Ty(context));
                else throw logic_error("cann't use bool in == != >= <= < >");
            }
        }
    }
    if (root->childNode[1]->isName("==") ) 
        return (left->getType() == Type::getFloatTy(context)) ? builder.CreateFCmpOEQ(left, right, "fcmptmp") : builder.CreateICmpEQ(left, right, "icmptmp");
    else if (root->childNode[1]->isName(">=") ) 
        return (left->getType() == Type::getFloatTy(context)) ? builder.CreateFCmpOGE(left, right, "fcmptmp") : builder.CreateICmpSGE(left, right, "icmptmp");
    else if (root->childNode[1]->isName("<=") ) 
        return (left->getType() == Type::getFloatTy(context)) ? builder.CreateFCmpOLE(left, right, "fcmptmp") : builder.CreateICmpSLE(left, right, "icmptmp");
    else if (root->childNode[1]->isName(">") )
        return (left->getType() == Type::getFloatTy(context)) ? builder.CreateFCmpOGT(left, right, "fcmptmp") : builder.CreateICmpSGT(left, right, "icmptmp");
    else if (root->childNode[1]->isName("<") ) 
        return (left->getType() == Type::getFloatTy(context)) ? builder.CreateFCmpOLT(left, right, "fcmptmp") : builder.CreateICmpSLT(left, right, "icmptmp");
    else if (root->childNode[1]->isName("!=") ) 
        return (left->getType() == Type::getFloatTy(context)) ? builder.CreateFCmpONE(left, right, "fcmptmp") : builder.CreateICmpNE(left, right, "icmptmp");
    return NULL;
}

// Exp --> ID LP Args RP
Value* IRGenerator::ReadNodePrint(Node* root){
    string formatStr = "";
    vector<Value *> *args = getPrintArgs(root->childNode[2]);
    for (auto & arg : *args) {
        if (arg->getType() == builder.getInt32Ty()) formatStr += "%d";
        else if (arg->getType() == builder.getInt8Ty()) formatStr += "%c";
        else if (arg->getType() == builder.getInt1Ty()) formatStr += "%d";
        else if (arg->getType() == builder.getDoubleTy()) formatStr += "%lf";
        else if (arg->getType() == builder.getInt8PtrTy()) formatStr += "%s";
        else if (arg->getType()->getPointerElementType()->isArrayTy() && arg->getType()->getPointerElementType()->getArrayElementType() == builder.getInt8Ty()) {
            formatStr += "%s";
            vector<Value*> indexList;
            indexList.push_back(builder.getInt32(0));
            indexList.push_back(builder.getInt32(0));
            arg = builder.CreateGEP(arg, indexList);
        }
        else throw logic_error("[ERROR]Invalid type to write.");
        
    }
    formatStr += "\n";
    auto formatConst = ConstantDataArray::getString(context, formatStr.c_str());
    auto formatStrVar = new GlobalVariable(*(module), ArrayType::get(builder.getInt8Ty(), formatStr.size() + 1), true, GlobalValue::ExternalLinkage, formatConst, ".str");
    auto zero = Constant::getNullValue(builder.getInt32Ty());
    Constant* indices[] = {zero, zero};
    auto varRef = ConstantExpr::getGetElementPtr(formatStrVar->getType()->getElementType(), formatStrVar, indices);
    args->insert(args->begin(), varRef);
    return builder.CreateCall(printf, *args, "printf");
}

Value* IRGenerator::ReadNodePrintf(Node* root){
    vector<Value *> *args = getPrintArgs(root->childNode[2]);
    return builder.CreateCall(printf, *args, "printf");
}

Value* IRGenerator::ReadNodeScan(Node* root){
    string formatStr = "";
    vector<Value*> *args = getArgsAddr(root->childNode[2]);
    //Just common variable
    for (auto arg : *args) {
        if (arg->getType()->getPointerElementType() == builder.getInt32Ty()) formatStr += "%d";
        else if (arg->getType()->getPointerElementType() == builder.getInt8Ty()) formatStr += "%c";
        else if (arg->getType()->getPointerElementType() == builder.getInt1Ty()) formatStr += "%d";
        else if (arg->getType()->getPointerElementType() == builder.getFloatTy()) formatStr += "%f";
        else if (arg->getType()->getPointerElementType()->isArrayTy() && arg->getType()->getPointerElementType()->getArrayElementType() == builder.getInt8Ty()) formatStr += "%s";
        else throw logic_error("[ERROR]Invalid type to read.");
    }
    args->insert(args->begin(), builder.CreateGlobalStringPtr(formatStr));
    return builder.CreateCall(scanf, *args, "scanf");
}

// Exp --> ID
// Exp --> ID[Exp]
// Exp --> ID[]
Value* IRGenerator::ReadNodeAddr(Node* root){
    if (root->getChildNum() == 1) {
        return FindValue(root->childNode[0]->getNodeName());
    } else if (root->getChildNum() == 4) {
        Value * arrayValue = FindValue(root->childNode[0]->getNodeName());
        Value * indexValue = ReadNodeExp(root->childNode[2]);
        vector<Value*> indexList;
        indexList.push_back(builder.getInt32(0));
        indexList.push_back(indexValue);
        // var value
        return builder.CreateInBoundsGEP(arrayValue, ArrayRef<Value*>(indexList), "tmpvar");
    } else if(root->getChildNum() == 3) {
        return FindValue(root->childNode[0]->getNodeName());
    } else {
        //ERROR
    }
    return NULL;
}

// ExtDecList --> VarDec
// ExtDecList --> VarDec COMMA ExtDecList
// DecList --> VarDec
// DecList --> VarDec COMMA DecList
vector<pair<string, int>>* IRGenerator::getNameList(Node* root, int type){
    if (!(root->isType("ExtDecList"))&& !(root->isType("DecList"))) {
        throw logic_error("[ERROR]Wrong function call : getNameList.");
    }
    Node *temp = root;
    vector<pair<string, int>> *nameList = new vector<pair<string, int>>;
    while (true) {
        // VarDec --> ID[INT]
        if (temp->childNode[0]->getChildNum() == 4) {
            int arraySize = stoi(temp->childNode[0]->childNode[2]->getNodeName());
            nameList->push_back(make_pair(temp->childNode[0]->childNode[0]->getNodeName(), ARRAY + arraySize));
            temp->childNode[0]->childNode[0]->setValueType(type + ARRAY);
        }
        // VarDec --> ID
        else if (temp->childNode[0]->getChildNum() == 1) {
            nameList->push_back(make_pair(temp->childNode[0]->childNode[0]->getNodeName(), VAR));
            temp->childNode[0]->childNode[0]->setValueType(type);
        }
        else if (temp->childNode[0]->getChildNum() == 3) {
            nameList->push_back(make_pair(temp->childNode[0]->childNode[0]->getNodeName(), ARRAY));
            temp->childNode[0]->childNode[0]->setValueType(type + ARRAY);
        }
        else {
            throw logic_error("[ERROR]Wrong var def");
            return nameList;
        } 
        // ExtDecList --> VarDec COMMA ExtDecList
        // DecList --> VarDec COMMA DecList
        if (temp->getChildNum() == 3)
            temp = temp->childNode[2];
        // ExtDecList --> VarDec
        // DecList --> VarDec
        else
            break;        
    }
    return nameList;
}

vector<pair<string, Type*>>* IRGenerator::getParam(Node* root){
    if (!(root->isType("VarList"))) {
        throw logic_error("[ERROR]Wrong function call : getParam.");
        return NULL;
    }
    Node *temp0 = root;
    // ParamDec
    Node *temp1 = root->childNode[0];
    vector<pair<string, Type*>> *paramList = new vector<pair<string, Type*>>;
    while (true) {
        temp1 = temp0->childNode[0];
        // ParamDec --> Specifier VarDec
        // VarDec --> ID[] 
        if (temp1->childNode[1]->getChildNum() == 3) {
            paramList->push_back(make_pair(temp1->childNode[1]->childNode[0]->getNodeName(), getLlvmType(ARRAY + temp1->childNode[0]->getValueType(), 0)));
        }
        // VarDec --> ID
        else if (temp1->childNode[1]->getChildNum() == 1) {
            paramList->push_back(make_pair(temp1->childNode[1]->childNode[0]->getNodeName(), getLlvmType(VAR + temp1->childNode[0]->getValueType(), 0)));
        }
        else {
            throw logic_error("[ERROR]Wrong var def.");
            return paramList;
        } 
        // VarList --> ParamDec COMMA VarList
        if (temp0->getChildNum() == 3)
            temp0 = temp0->childNode[2];
        // VarList --> ParamDec
        else
            break;        
    }
    return paramList;
}

vector<Value *>* IRGenerator::getArgs(Node* root){
    vector<Value *> * args = new vector<Value *>;
    Node *node = root;
    while (true) {
        Value * tmp = ReadNodeExp(node->childNode[0]);
        if (node->getChildNum() == 1) {
            args->push_back(tmp);
            break;
        }
        else {
            args->push_back(tmp);
            node = node->childNode[2];
        }
    }
    return args;
}

vector<Value *>* IRGenerator::getPrintArgs(Node* root){
    vector<Value *> * args = new vector<Value *>;
    Node *node = root;
    while (true) {
        Value * tmp = ReadNodeExp(node->childNode[0]);
        if (tmp->getType() == Type::getFloatTy(context))
            tmp = builder.CreateFPExt(tmp, Type::getDoubleTy(context), "tmpdouble");
        if (node->getChildNum() == 1) {
            args->push_back(tmp);
            break;
        }
        else {
            args->push_back(tmp);
            node = node->childNode[2];
        }
    }
    return args;
}

vector<Value *>* IRGenerator::getArgsAddr(Node* root){
    vector<Value *> * args = new vector<Value *>;
    Node *node = root;
    while (true) {
        if (node->getChildNum() == 1) {
            args->push_back(ReadNodeAddr(node->childNode[0]));
            break;
        }
        else {
            args->push_back(ReadNodeAddr(node->childNode[0]));
            node = node->childNode[2];
        }
    }
    return args;
}

AllocaInst *CreateEntryBlockAlloca(Function *TheFunction, StringRef VarName, Type* type) {
  IRBuilder<> TmpB(&TheFunction->getEntryBlock(), TheFunction->getEntryBlock().begin());
  return TmpB.CreateAlloca(type, nullptr, VarName);
}
