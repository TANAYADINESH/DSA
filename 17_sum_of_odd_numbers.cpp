// C++ program to find the sum of odd numbers from 1 to N

#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;

    cout << "Enter N: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
    }

    cout << "Sum of odd numbers = " << sum;

    return 0;
}