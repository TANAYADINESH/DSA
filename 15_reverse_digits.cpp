// C++ program to reverse the digits of a number

#include <iostream>
using namespace std;

int main()
{
    int number;
    int reverse = 0;

    cout << "Enter a number: ";
    cin >> number;

    while (number > 0)
    {
        int digit = number % 10;

        reverse = reverse * 10 + digit;

        number = number / 10;
    }

    cout << "Reverse = " << reverse;

    return 0;
}

