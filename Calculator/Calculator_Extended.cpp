#include <iostream>
#include <cassert>
#include <Climits>
#include<iomanip>

using namespace std;

void isInRange(double num1, double num2)
{
    if ((num1 > __DBL_MAX__ || num1 < __DBL_MIN__) || (num2 > __DBL_MAX__ || num2 < __DBL_MIN__))
    {
        throw runtime_error("error at line no 12: Input value out of range ");
    }
}

void addition(double number1, double number2)
{
    //cout << fixed;
    if ((number1 >= __DBL_MAX__ && number2 > 0) || (number2 >= __DBL_MAX__ && number1 > 0))
    {
       double addition = 0;
        if ((addition = number1 + number2) >= __DBL_MAX__)
        {
            throw runtime_error("error at line no 24 :addition out of range");
        }
        else
        {
            addition = number1 + number2;
            cout  << "\nsum : " << addition;
        }
    }
    else
    {
        cout << "\nAddition: " << number1 + number2;
    }
}

void substraction(double number1, double number2)
{
    double diff;
    if ((number2 > 0 && number1 < __DBL_MIN__ + number2) || (number2 < 0 && number1 < __DBL_MIN__ + number2))
    {
        throw runtime_error("error at line no 43 : Input value out of range ");
    }
    else
    {
        diff = number1 - number2;
    }
    cout << endl
         << "substraction : " << diff;
}

void multiplication(double number1, double number2)
{
    double mult = number1 * number2;
    if ((mult > __DBL_MAX__) || (mult < __DBL_MIN__))
    {
        throw runtime_error("error at line no 58 : Input value out of range");
    }
    else
    {
        cout << "\nMultiplication : " << mult;
    }
}

void division(double number1, double number2)
{
    if (number2 == 0 || ((number1 == __DBL_MIN__) && (number2 == -1)))
    {
        throw runtime_error("error at line no 70 : Denominator may not be zero");
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
            double num1, num2;
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
                //isInRange(num1, num2);
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