// C++ program to count the number of multiples of 3 in a given list of numbers
#include <iostream>
using namespace std;

int main()
{
    int n;
    int num;
    int count = 0;

    cout << "Enter N: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num;

        if (num % 3 == 0)
        {
            count++;
        }
    }

    cout << "Count = " << count;

    return 0;
}