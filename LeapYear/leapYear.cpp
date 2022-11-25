
#include <iostream>

#include <assert.h>

// void checkLeapYear(int year)
// {
//     if (year % 400 == 0)
//     {
//         std::cout << " Leap Year" << std::endl;
//     }

//     else if (year % 100 == 0)
//     {
//         std::cout << " Not Leap Year" << std::endl;
//     }

//     else if (year % 4 == 0)
//     {
//         std::cout << " Leap Year" << std::endl;
//     }

//     else
//     {
//         std::cout << " Not Leap Year" << std::endl;
//     }
// }
bool checkLeapYear(int year)
{
    if (year % 400 == 0)
    {
        return true;
    }

    else if (year % 100 == 0)
    {
        return false;
    }

    else if (year % 4 == 0)
    {
        return true;
    }

    else
    {
        return false;
    }
}

int main()
{
    int year;
    std::cout << "Enter Year" << std::endl;
    std::cin >> year;
    assert(checkLeapYear(year) == 1);
    assert(checkLeapYear(year) == 0);

    return 0;
}