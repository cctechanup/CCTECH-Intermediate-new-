#include <iostream>
#include <cassert>

#include <cstdlib>
using namespace std;
int findClosestNumber(int arr[], int length)
{
    int currValue = 0;
    int closestValue = arr[0];
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

    exit(0);
}
