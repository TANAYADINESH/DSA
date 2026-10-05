// C++ program to find the second largest number in a given list of numbers
#include <iostream>
using namespace std;

int main()
{
    int n;
    int num;
    int largest = -1;
    int second_largest = -1;

    cout << "Enter N: ";
    cin >> n;

    cout << "Enter the numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> num;

        if (num > largest)
        {
            second_largest = largest;
            largest = num;
        }
        else if (num > second_largest && num != largest)
        {
            second_largest = num;
        }
    }

    cout << "Second Largest = " << second_largest;

    return 0;
}