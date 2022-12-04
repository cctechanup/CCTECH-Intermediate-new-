#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        cout << "\n";
    }
    else if (argc > 1)
    {
        for (int i = 1; i < argc; i++)
        {
            cout << "=> " << argv[1] << " <==" << endl;
            string str;
            vector<string> vec;
            int count = 0;

            ifstream infile(argv[i]);
            if (!infile)
            {
                cout << "Tail: cannot read: " << argv[i] << " : No such file or directory ";
            }
            else
            {
                while (getline(infile, str))
                {
                    vec.push_back(str);
                }
            }
            if (vec.size() > 10)
            {

                int count = vec.size() - 10;
                for (int i = count; i <= vec.size(); i++)
                {
                    cout << vec.at(i) << endl;
                }
            }
            else
            {
                for (int i = 0; i < vec.size(); i++)
                {
                    cout << vec.at(i) << endl;
                }
            }
        }
    }
}