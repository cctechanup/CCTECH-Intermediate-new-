#include <iostream>
#include <string>

using namespace std;
int main(int argc, char *argv[])
{
    char ch;
    if (argc == 1)
    {
        while (1)
        {
            ch = getchar();
            if (ch == EOF)
            {
                break;
            }
            cout << ch;
        }
    }
    else if (argc > 1)
    {
        char ch_1;
        for (int i = 1; i < argc; i++)
        {
            FILE *fp = fopen(argv[i], "r");
            if (!fp)
            {
                cout << "cat" << argv[i] << " : No such file or directory ";
            }
            else
            {
                while (!feof(fp))
                {
                    ch_1 = fgetc(fp);
                    cout << ch_1;
                }
            }
            fclose(fp);
        }
    }
   
    return 0;
}