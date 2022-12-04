#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
    char c;
    if (argc == 1)
    {
        cout << "\n";
    }
    else if (argc > 1)
    {
        string str;
        vector<string> vec;
        int count = 0;
        for (int i = 1; i < argc; i++)
        {
            ifstream infile(argv[i]);
            if (!infile)
            {
                cout << "sort: cannot read: " << argv[i] << " : No such file or directory ";
                count++;
                break;
            }
            else
            {
                while (getline(infile, str))
                {
                    vec.push_back(str);
                }
            }
        }
            if (count == 0)
            {
                sort(vec.begin(), vec.end());
                for (int i = 0; i < vec.size(); i++)
                    cout << vec.at(i) << endl;
            }
        
    }
}