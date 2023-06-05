#include "node.h"

Node* ROOT;

int Node::isType(string type){
    int res = 0;
    if((this->nodeType).compare(type) == 0) res = 1;
    return res;
}

int Node::isName(string name){
    int res = 0;
    if((this->nodeName).compare(name) == 0) res = 1;
    return res;
}

int Node::getValueType() {
    if (this->isType("Specifier")) {
        // Specifier --> Type
        if (this->childNode[0]->isType("INT")) {
            return TYPE_INT;
        } 
        else if (this->childNode[0]->isType("FLOAT")) {
            return TYPE_FLOAT;
        } 
        else if (this->childNode[0]->isType("CHAR")) {
            return TYPE_CHAR;
        } 
        else if (this->childNode[0]->isType("BOOL")) {
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
