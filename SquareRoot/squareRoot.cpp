#include <iostream>
#include <cmath>
#include <Cstring>

using namespace std;

double findSquareRoot(double number)
{
    double result;
    if (number == 0)
    {
        throw runtime_error("Zero has not a square root ");
    }
    else if (number < 0)
    {
        throw runtime_error("Cannot find the squart root of negative number.");
    }
    else
    {

        result = sqrt(number);
    }
    return result;
}

int main()
{
    try
    {
        string str;
        cout << "Enter the number : ";
        getline(cin, str);
        bool flag = false;
        for (int i = 0; i < str.length(); i++)
        {
            if ((str[i] > 47 && str[i] < 58) || str[i] == '.' || str[i] == '-')
            {
                flag = true;
            }
            else
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            double number = stod(str);
            cout << " Squart root of " << number << " is : " << findSquareRoot(number);
        }
        else
        {
            throw runtime_error("Inavlid input");
        }
    }
    catch (exception &e)
    {
        cerr << e.what() << endl;
    }

    return 0;
}