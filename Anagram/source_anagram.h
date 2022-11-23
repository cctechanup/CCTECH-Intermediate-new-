#include <iostream>
#include <algorithm>
using namespace std;

int permute(string &word, int left, int right)
{

    if (left == right)
        cout << word << endl;
    else
    {

        for (int i = left; i <= right; i++)
        {
            swap(word[left], word[i]);

            permute(word, left + 1, right);

            swap(word[left], word[i]);
        }
    }
    return 0;
}
