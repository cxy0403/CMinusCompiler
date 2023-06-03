#include "type.h"
#include "IRGenerator.h"
#include "jsonGenerator.h"
#include "parser.hpp"
#include "node.h"
#include <fstream>

#include "llvm/Support/TargetSelect.h"

extern Node *ROOT;
extern IRGenerator *Generator;
extern int yyparse();

int main() {
    yyparse();
    auto JS = new jsonGenerator();
    auto root = JS->jsonGen(ROOT);

    string jsonFile = "../visualization/ast_tree.json";
    std::ofstream astJson(jsonFile);
    if(astJson.is_open()){
        astJson << root;
        astJson.close();
        cout << "json write to " << jsonFile << endl;
    }


    llvm::InitializeNativeTarget();
    llvm::InitializeNativeTargetAsmPrinter();
    llvm::InitializeNativeTargetAsmParser();
    Generator = new IRGenerator();
    Generator->Generate(ROOT);

    return 0;
}
