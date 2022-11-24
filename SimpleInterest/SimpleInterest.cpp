/*Using C++ classes implement a Simple Interest Calculator*/

#include <iostream>
using namespace std;
class SimpleInterest
{
private:
    double principal;
    double rate;
    double year;

public:
    SimpleInterest()
    {
    }
    SimpleInterest(double principal, double rate, double year)
    {
        this->principal = principal;
        this->rate = rate;
        this->year = year;
    }

    void calculateSimpleInterest()
    {

        if (principal == 0 || rate == 0 || year == 0)
        {
            cout << "Principal: " << principal << endl;
            cout << "Rate : " << rate << endl
                 << "Year : " << year << endl
                 << "Simple Interest : " << 0 << endl;
        }
        else
        {
            double simpleInterest = (abs(principal) * rate * year) / 100;
            cout << "The Simple Interest for : " << endl
                 << "Principal : " << abs(principal) << endl
                 << "Rate : " << abs(rate) << endl
                 << "Year : " << abs(year) << endl
                 << "Simple Interest : " << simpleInterest << endl;
        }
    }
};
int main()
{
    SimpleInterest si(-1000, -8.5, -2);
    si.calculateSimpleInterest();

    return 0;
}