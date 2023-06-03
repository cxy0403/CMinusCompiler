#include "jsonGenerator.h"

jsonGenerator::jsonGenerator(){}

jsonGenerator::~jsonGenerator(){}

Json::Value jsonGenerator::jsonGen(Node * node){
    Node* cur_node = node;
    Json::Value root;
    string padding = "";
    if(cur_node->nodeType.compare("Specifier") == 0 || cur_node->nodeType.compare("Exp") == 0){
        int valueType = cur_node->getValueType();
        switch(valueType){
            //case VOID: 
            //    padding = "void";
            //    break;
            case VAR:
                padding = "var";
                break;
            case ARRAY:
                padding = "array";
                break;
            case FUN:
                padding = "func";
                break;
            case TYPE_INT:
                padding = "int";
                break;
            case TYPE_INT_ARRAY:
                padding = "int array";
                break;
            case TYPE_FLOAT:
                padding = "float";
                break;
            case TYPE_FLOAT_ARRAY:
                padding = "float array";
                break;
            case TYPE_CHAR:
                padding = "char";
                break;
            case TYPE_CHAR_ARRAY:
                padding = "char array";
                break;
            case TYPE_BOOL:
                padding = "bool";
                break;
            case TYPE_BOOL_ARRAY:
                padding = "bool array";
                break;
            default:
                break;
        }

    }

    root["name"] = cur_node->nodeType + (padding == "" ? "" : ": " + padding);

    for(int i = 0; i < cur_node->childNum; i++){
        if(cur_node->childNode[i]){
            root["children"].append(this->jsonGen(cur_node->childNode[i]));
        }
    }
    return root;
}
