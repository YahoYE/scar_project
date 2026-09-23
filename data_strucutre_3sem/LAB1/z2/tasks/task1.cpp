#include "tasks.h"
#include <iostream>
#include <string>

using namespace std;

void codePrint(const int l[], int size, string name)
{
    cout << name << endl;
    for (int i = 0; i < size; i++)
    {
        cout << l[i] << " ";
    }
}

void lsort(int l[])
{
    for (int i = 0; i < 9; i++)
    {
        bool swaper = false;
        for (int j = 0; j < 9; j++)
        {
            if (l[j] > l[j + 1])
            {
                int inttemp = l[j + 1];
                l[j+1] = l[j];
                l[j] = inttemp;
                swaper = true;
            }
        }
        if (!swaper) {break;}
    }
    codePrint(l, 10, "Sorted array is:");
}

void task1()
{
    int l[10] = {12, 21, 119, -80, 300, 75, 81, -8, 47, 31};
    codePrint(l, 10, "Source array is:");
    cout << endl;
    lsort(l);
}