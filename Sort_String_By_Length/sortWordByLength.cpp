#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
void displaySortedText(vector<string> vec_sort)
{
    for (auto sort : vec_sort)
    {
        cout << sort << endl;
    }
}
void sortStringByLength(vector<string> words_Vect)
{
    multimap<size_t, string> words_Map;
    vector<string> vec_data;

    for (auto word : words_Vect)
    {
        words_Map.insert({word.length(), word});
    }

    multimap<size_t, string>::iterator itrate;
    
    for (auto itrate = words_Map.begin(); itrate != words_Map.end(); itrate++)
    {
        vec_data.push_back(itrate->second);
    }

    displaySortedText(vec_data);
}