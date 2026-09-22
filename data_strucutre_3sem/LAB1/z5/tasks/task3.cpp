#include "tasks.h"
#include <iostream>

using namespace std;

void task3()
{
    int size;
    cout << "Enter char array size: "; cin >> size;

    char *arr = new char[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter a[" << i << "]: "; cin >> arr[i];
    }

    cout << "Your char array is:\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    delete[] arr;
}