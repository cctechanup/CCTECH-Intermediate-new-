#ifndef VERIFY_H
#define VERIFY_H
#include <iostream>
using namespace std;
#define verify(condition){\
     do{\
        if(!(condition)){\
            cerr << __FILE__ <<": " << __LINE__ << ": error: In the " <<__func__ << "(), verification of condition \"" << #condition << "\" failed." << endl; \
        }\
    }while(0);\
}
#endif
