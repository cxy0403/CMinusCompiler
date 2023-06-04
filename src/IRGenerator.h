#ifndef _IR_GENERATOR_H_
#define _IR_GENERATOR_H_

#include <iostream>
#include <stack>


#include <llvm-10/llvm/IR/Value.h>
#include <llvm-10/llvm/IR/LLVMContext.h>
#include <llvm-10/llvm/IR/IRBuilder.h>
#include <llvm-10/llvm/IR/BasicBlock.h>
#include <llvm-10/llvm/IR/Module.h>
#include <llvm-10/llvm/IR/Function.h>
#include <llvm-10/llvm/IR/GlobalVariable.h>
#include <llvm-10/llvm/IR/DerivedTypes.h>
#include <llvm-10/llvm/IR/ValueSymbolTable.h>
#include <llvm-10/llvm/Support/raw_ostream.h>

#include "node.h"

using namespace llvm;

static LLVMContext context;
static IRBuilder<> builder(context);

class IRGenerator{
private:
    Module* module;
    Function* printf;
    Function* scanf;
    std::stack<Function*> FunctionStack;

public:
    Function* CurrentFunction();
    Value* FindValue(std::string name);
    Value *typeCast(Value* src, Type* dst);
    Instruction::CastOps getCastInst(Type* src, Type* dst);
    Type* getLlvmType(int type, int arraySize);

    void PushFunction(Function* f);
    void PopFunction();
    void Generate(Node* root);

    int isStackEmpty(){return this->FunctionStack.empty();}

    Value *ReadNode(Node* root);
    Value *ReadNodeExp(Node* root);
    Value *ReadNodeFunc(Node* root);
    Value *ReadNodeVar(Node* root);
    Value *ReadNodeStmt(Node* root);
    Value *ReadNodeWhile(Node* root);
    Value *ReadNodeIf(Node* root);
    Value *ReadNodeReturn(Node* root);
    Value *ReadNodeCompSt(Node* root);
    Value *ReadNodeRELOP(Node* root);
    Value *ReadNodePrint(Node* root);
    Value *ReadNodePrintf(Node* root);
    Value *ReadNodeScan(Node* root);
    Value *ReadNodeAddr(Node* root);

    vector<pair<string, int>> *getNameList(Node* root, int type);
    vector<pair<string, Type*>> *getParam(Node* root);
    vector<Value *> *getArgs(Node* root);
    vector<Value *> *getPrintArgs(Node* root);
    vector<Value *> *getArgsAddr(Node* root);

    IRGenerator();
    ~IRGenerator();

};

AllocaInst *CreateEntryBlockAlloca(Function *TheFunction, StringRef VarName, Type* type);

#endif
