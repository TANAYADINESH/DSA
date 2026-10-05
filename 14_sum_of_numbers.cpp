//Accept a positive integer N from the user and calculate the sum of all even numbers from 1 to N. Where N=10.



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
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }

    cout << "Sum of even numbers = " << sum;

    return 0;
}
