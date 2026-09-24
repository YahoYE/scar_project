#include "tasks.h"
#include <iostream>
using namespace std;

void task2()
{
    const int size = 10;
    int a[size] = {1, 2, 7, -1, 5, 3, -1, 7, 1, 6};
    cout << "Size of int type: " << sizeof(int) << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "Address of a[" << i << "]: " << &a[i] << endl;
    }

    cout << endl;

    cout << "Size of double type: " << sizeof(double) << endl;
    double b[size] =
    {
        1.0, 2.0, 7.0, -1.0, 5.0,
        3.5, -1.8, 7.2, 1.9, 6.2
    };
    for (int i = 0; i < size; i++)
    {
        cout << "Address of b[" << i << "]: " << &b[i] << endl;
    }
}