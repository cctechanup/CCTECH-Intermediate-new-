#include <iostream>
#include <string>
#include <vector>
#include "sort_word_by_length.h"
using namespace std;

int main()
{
    string words;
    vector<string> vec_Words;

    while (getline(cin, words))
    {
        vec_Words.push_back(words);
    }
    sortStringByLength(vec_Words);
    
    return EXIT_SUCCESS;
}