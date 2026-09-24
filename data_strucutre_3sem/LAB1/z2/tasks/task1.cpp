#include "tasks.h"
#include <iostream>
#include <string>

using namespace std;

void CodePrint(const int array[], int size, const string name)
{
    cout << name << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}


void SortArray(int array[], const int &size)
{
    for (int i = 0; i < size - 1; i++)
    {
        //TODO: naming
        bool isswaping = false;
        for (int j = 0; j < size - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int inttemp = array[j + 1];
                array[j+1] = array[j];
                array[j] = inttemp;
                isswaping = true;
            }
        }
        if (!isswaping) {break;}
    }
    CodePrint(array, size, "Sorted array is:");
}

void task1()
{
    const int size = 10;
    int array[size] = {12, 21, 119, -80, 300, 75, 81, -8, 47, 31};
    CodePrint(array, size, "Source array is:");
    cout << endl;
    SortArray(array, size);
}