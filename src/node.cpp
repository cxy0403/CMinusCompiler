#include "node.h"

Node* ROOT;

int Node::isType(string type){
    int res = 0;
    if((this->nodeType).compare(type) == 0) res = 1;
    return res;
}

int Node::isName(string name){
    int res = 0;
    if((this->nodeType).compare(name) == 0) res = 1;
    return res;
}

int Node::getValueType() {
    if (this->isType("Specifier")) {
        // Specifier --> Type
        if (this->childNode[0]->isType("int")) {
            return TYPE_INT;
        } 
        else if (this->childNode[0]->isType("float")) {
            return TYPE_FLOAT;
        } 
        else if (this->childNode[0]->isType("char")) {
            return TYPE_CHAR;
        } 
        else if (this->childNode[0]->isType("boolean")) {
            return TYPE_BOOL;
        } 
        else {

        }
    } else if (this->isType("Exp")) {
        return this->valueType;
    }
    // Error
    return -1;
}
