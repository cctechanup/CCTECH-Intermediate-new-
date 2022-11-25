#include <iostream>
#include <cassert>

#include <cstdlib>
using namespace std;
int findClosestNumber(int arr[], int length)
{
    int currValue = 0;
    int closestValue = arr[0];
    if (length == 0)
    {
        cout << "Empty Array" << endl;
        return 0;
    }
    for (int i = 0; i < length; i++)
    {
        currValue = arr[i] * arr[i];
        if (currValue <= (closestValue * closestValue))
        {
            closestValue = arr[i];
        }
    }
    return closestValue;
}
int main()
{
    int arr[] = {-2, -1, 1, 9, 2, 3};
    assert(findClosestNumber(arr, sizeof(arr) / sizeof(int)) == 1);

    int arr1[] = {};
    assert(findClosestNumber(arr1, sizeof(arr1) / sizeof(int)) == 0);

    int arr2[] = {9};
    assert(findClosestNumber(arr2, sizeof(arr2) / sizeof(int)) == 1);
    exit(0);
}