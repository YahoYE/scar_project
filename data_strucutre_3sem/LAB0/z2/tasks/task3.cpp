#include "tasks.h"
#include <iostream>

using namespace std;

void task3()
{
    const int size = 8;

    char array[size];
    cout << "Enter array of 8 chars" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "a[" << i << "]: ";

        string tempString;
        cin >> tempString;
        array[i] = tempString[0];
    }

    cout << "Your array is: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    cout << "\nAll letters in your array:\n";

    for (int i = 0; i < size; ++i)
    {
        if (array[i] >= 'a' && array[i] <= 'z')
        {
            cout << array[i] << " ";
        }
    }
    cout << endl;
}