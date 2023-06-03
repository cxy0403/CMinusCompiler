#ifndef _JSONGENERATOR_H_
#define _JSONGENERATOR_H_
#include "node.h"
#include "type.h"
#include <string>
#include <json/json.h>

using namespace std;

class jsonGenerator {
    public:
    jsonGenerator();
    Json::Value jsonGen(Node * node);
    ~jsonGenerator();
};

#endif
