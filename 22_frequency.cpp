// C++ program to find the frequency of each element in a given list of numbers
#include <iostream>
using namespace std;

int main()
{
    int n;
    int arr[100];
    int search;
    int count = 0;

    cout << "Enter N: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter search value: ";
    cin >> search;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            count++;
        }
    }

    cout << "Frequency = " << count;

    return 0;
}