#include "tasks.h"
#include <iostream>

using namespace std;

void task3()
{
    int size;
    cout << "Enter char array size: ";
    cin >> size;

    //TODO: naming
    char *array = new char[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter a[" << i << "]: ";
        cin >> array[i];
    }

    cout << "Your char array is:\n";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    delete[] array;
}