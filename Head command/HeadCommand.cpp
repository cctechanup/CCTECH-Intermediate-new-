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
            string str;
            vector<string> vec;
            int count = 0;

            ifstream infile(argv[i]);
            if (!infile)
            {
                cout << "Head: cannot read: " << argv[i] << " : No such file or directory ";
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
                cout << "==> " << argv[1] << " <==" << endl;
                for (int i = 0; i < 10; i++)
                {
                    cout << vec.at(i) << endl;
                }
            }
            else
            {
                cout << "==> " << argv[1] << " <==" << endl;
                for (int i = 0; i < vec.size(); i++)
                {
                    cout << vec.at(i) << endl;
                }
            }
        }
    }
}