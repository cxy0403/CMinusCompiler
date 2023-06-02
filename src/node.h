#ifndef __NODE__
#define __NODE__

#include <string>
#include <stdarg.h>
#include <llvm/IR/Value.h>
#include <llvm/IR/BasicBlock.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/Function.h>
#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/LegacyPassManager.h>
#include <llvm/IR/CallingConv.h>
#include <llvm/IR/IRPrintingPasses.h>
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/GlobalVariable.h>
#include "IRGenerator.h"
using namespace std;

class Node{
public:
    Node(char * nodeName, string nodeType, int lineNo){
        this->nodeName = nodeName;
        this->nodeType = nodeType;
        this->lineNo = lineNo;
        this->childNum = 0;
    }
    Node(string nodeName, string nodeType, int childNum, ...){
        this->nodeName = nodeName;
        this->nodeType = nodeType;
        this->childNum = childNum;

        //获取子节点
        va_list l;
        va_start(l, childNum);
        for (int i = 0; i < childNum; i++) {
            Node* node;
            node = va_arg(l, Node *);
            this->childNode[i] = node;
        }
        this->lineNo = this->childNode[0]->lineNo;
        va_end(l);
        
    }
    int getValueType(){return valueType;}
    void setValueType(int type){valueType = type;}
    llvm::Type* getLlvmType(int type, int arraySize); 

private:
    string nodeName;
    string nodeType;
    int valueType;
    int childNum;
    Node** childNode;
    int lineNo;
};

#endif