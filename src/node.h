#ifndef __NODE__
#define __NODE__

#include <string>
#include <stdarg.h>
#include "type.h"
#include <fstream>
#include <iostream>

using namespace std;

class Node{
public:
    Node** childNode;

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
        this->childNode = new Node * [childNum];

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
        //cout << nodeName << " " << nodeType << endl;
        
    }
    string getNodeName(){return nodeName;}
    string getNodeType(){return nodeType;}
    int getValueType();
    int getChildNum(){return childNum;}
    void setValueType(int type){valueType = type;}
    int isType(string type);
    int isName(string name);
    


    string nodeName;
    string nodeType;
    int valueType;
    int childNum;
    int lineNo;
};

#endif
