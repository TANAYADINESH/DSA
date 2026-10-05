// C++ program to search for an element in a given list of numbers
#include <iostream>
using namespace std;

int main()
{
    int n;
    int arr[100];
    int key;
    int position = -1;

    cout << "Enter N: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter search key: ";
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            position = i;
            break;
        }
    }

    if (position != -1)
    {
        cout << "Position = " << position;
    }
    else
    {
        cout << "Element not found";
    }

    return 0;
}