#include <iostream>
#include <vector>
#include <cassert>
#include "source.h"

using namespace std;

int main()
{
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(5);
    vec.push_back(-1);

    assert(findClosestNumber(vec));

    return EXIT_SUCCESS;
}