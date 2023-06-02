#ifndef _IR_GENERATOR_H_
#define _IR_GENERATOR_H_

#include <iostream>
#include <stack>

#include <llvm/IR/LLVMContext.h>
#include "llvm/IR/IRBuilder.h"
#include <llvm/IR/BasicBlock.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/Function.h>
#include <llvm/IR/ValueSymbolTable.h>

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

    void PushFunction(Function* f);
    void PopFunction();
    void Generate();

    IRGenerator();
    ~IRGenerator();

};

#endif
