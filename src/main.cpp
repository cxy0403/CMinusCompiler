#include "type.h"
#include "IRGenerator.h"
#include "jsonGenerator.h"
#include "parser.hpp"
#include "node.h"
#include <fstream>
#include <iostream>

#include "llvm/Support/TargetSelect.h"

extern Node *ROOT;
extern IRGenerator *Generator;
extern int yyparse();
extern int yylex();

void printTree(Node * node,int level);

int main() {
    cout << "system begin......" << endl;
    cout << "parsing start......" << endl;
    //cout << yylex() << endl;
    /*int token;
    while ((token = yylex())) {
        printf("Token: %d,\n", token);
        if (token == 0) break;
    }
    */
    yyparse();
    cout << "parsing ends......" << endl;
    auto JS = new jsonGenerator();
    auto root = JS->jsonGen(ROOT);

    string jsonFile = "../visualization/ast_tree.json";
    std::ofstream astJson(jsonFile);
    if(astJson.is_open()){
        astJson << root;
        astJson.close();
        cout << "json write to " << jsonFile << endl;
    }
    
    printTree(ROOT,0);
    
    cout << "start initialization" << endl;
    llvm::InitializeNativeTarget();
    llvm::InitializeNativeTargetAsmPrinter();
    llvm::InitializeNativeTargetAsmParser();
    
    cout << "end initialization" << endl;
    Generator = new IRGenerator();
    cout << "start IR generate" << endl;
    Generator->Generate(ROOT);

    return 0;
}

void printTree(Node * node,int level){
    level++;
    
    int childrennum = node->childNum;
    int i,j;
    for (j=0;j<level;j++){
    	cout<<"   ";
    }
    cout << node->nodeType <<endl;
    for (i=0;i<childrennum;i++){
    	printTree(node->childNode[i],level);
    }
    return;
}
