#include <iostream>
#include "verify_header.h"

int main(){
    verify(1==2);
    verify(1==1);
    verify(2==1);
    verify(2==2);
    return EXIT_SUCCESS;
}