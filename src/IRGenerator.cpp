#include <IRGenerator.h>

using namespace llvm;

IRGenerator Generator;

void IRGenerator::Generate(){
    module = new Module("main", context);

    //获取类型参数; 生成函数，链接外部C库函数
    std::vector<Type*> args;
    args.push_back(builder.getInt8PtrTy());
    auto PrintfType = FunctionType::get(builder.getInt32Ty(), makeArrayRef(args), true);
    printf = Function::Create(PrintfType, Function::ExternalLinkage, Twine("printf"), this->module);
    printf->setCallingConv(CallingConv::C);

    auto ScanfType = FunctionType::get(builder.getInt32Ty(), true);
    scanf = Function::Create(ScanfType, Function::ExternalLinkage, Twine("scanf"), this->module);
    scanf->setCallingConv(CallingConv::C);
}

Function* IRGenerator::CurrentFunction(){
    return FunctionStack.top();
}

void IRGenerator::PushFunction(Function* f){
    FunctionStack.push(f);
}

void IRGenerator::PopFunction(){
    FunctionStack.pop();
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
