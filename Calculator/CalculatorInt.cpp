#include <iostream>
#include <cassert>
#include <Climits>

using namespace std;

void isInRange(long long int num1, long long int num2)
{
    if ((num1 > 4294967295 || num1 < INT_MIN) || (num2 > 4294967295 || num2 < INT_MIN))
    {
        throw runtime_error("error at line no 11: Input value out of range ");
    }
}

void addition(long long int number1, long long int number2)
{
    if ((number1 >= 4294967295 && number2 > 0) || (number2 >= 4294967295 && number1 > 0))
    {
        unsigned int addition = 0;
        if ((addition = number1 + number2) >= 4294967295)
        {
            throw runtime_error("error at line no 22 :addition out of range");
        }
        else
        {
            addition = number1 + number2;
            cout << "\nsum : " << addition;
        }
    }
    else
    {
        cout << "\nAddition: " << number1 + number2;
    }
}

void substraction(long long int number1, long long int number2)
{
    signed int diff;
    // if ((number2 > 0 && number1 < __DBL_MIN__ + number2) || (number2 < 0 && number1 < __DBL_MIN__ + number2))
    if ((number2 > 0 && number1 < -2147483648 + number2) || (number2 < 0 && number1 < -2147483648 + number2))
    {
        throw runtime_error("error at line no 41 : Input value out of range ");
    }
    else
    {
        diff = number1 - (number2);
    }
    cout << endl
         << "substraction : " << number1-(number2);
}

void multiplication(long long int number1, long long int number2)
{
    long long int mult = number1 * number2;
    if ((mult > 4294967295) || (mult < -2147483648))
    {
        throw runtime_error("error at line no 56 : Input value out of range");
    }
    else
    {
        cout << "\nMultiplication : " << mult;
    }
}

void division(long long int number1, long long int number2)
{
    if (number2 == 0 || ((number1 == INT_MIN) && (number2 == -1)))
    {
        throw runtime_error("error at line no 68 : Denominator may not be zero");
    }
    else
    {
        cout << "\nDivision is :- " << number1 / number2 << endl;
        ;
    }
}

int main()
{
    int choice;

    try
    {
        do
        {
            long long int num1, num2;
            cout << endl
                 << "Print 1 for addition " << endl;
            cout << "Print 2 for substraction" << endl;
            cout << "Print 3 for multiplication" << endl;
            cout << "Print 4 for division " << endl;
            cout << "Print 0 for exit" << endl;

            cin >> choice;

            switch (choice)
            {

            case 0:
            {
                cout << endl
                     << "ThankYou!!" << endl;
                exit(0);
                break;
            }

            case 1:
            {
                cout << "Enter the two numbers :- " << endl;
                cin >> num1;
                cin >> num2;
                isInRange(num1, num2);
                addition(num1, num2);
                break;
            }
            case 2:
            {
                cout << "Enter the two numbers :- " << endl;
                cin >> num1 >> num2;
                isInRange(num1, num2);
                substraction(num1, num2);
                break;
            }
            case 3:
            {
                cout << "Enter the two numbers :- " << endl;
                cin >> num1 >> num2;
                isInRange(num1, num2);
                multiplication(num1, num2);
                break;
            }
            case 4:
            {
                cout << "Enter the two numbers :- " << endl;
                cin >> num1 >> num2;
                isInRange(num1, num2);
                division(num1, num2);
                break;
            }
            }
        } while (choice != 0);
    }

    catch (runtime_error &e)
    {
        cout << "Exception occurred" << endl
             << e.what();
    }
    return 0;
}