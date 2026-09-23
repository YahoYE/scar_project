#include "tasks.h"
#include <iostream>

using namespace std;

void task1()
{
    //TODO: to const

    const int size = 8;
    //TODO: naming
    //TODO: string length
    double *arrray = new double[size]
    {
        1.0, 15.0, -8.2, -3.5, 12.6, 38.4, -0.5, 4.5
    };

    cout << "Array of double:\n";
    for (int i = 0; i < size; i++)
    {
        cout << arrray[i] << " ";
    }
    delete[] arrray;
}