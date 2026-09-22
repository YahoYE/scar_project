#include "tasks.h"
#include <iostream>

using namespace std;

void codePrint(const float l[], const int size, const string name)
{
    cout << name << endl;
    for (int i = 0; i < size; i++)
    {
        cout << l[i] << " ";
    }
}
int count(const float l[], const float searchingValue)
{
    int counter = 0;
    for (int i = 0; i <= 12; i++)
    {
        if (l[i] >= searchingValue)
        {
            counter += 1;
        }
    }
    return counter;
}

void task2()
{
    float l[12] = {12.0, 21.5, 119.2, -80.7, 300.0, 75.5, 81.2, 8.1, 47.3, 31.2, 85.3, 100.1};
    codePrint(l, 12, "Source array is:"); cout << endl;
    float searchingValue;
    cout << "Enter searching value: "; cin >> searchingValue;
    cout << "Elements of array more than " << searchingValue << ": " << count(l, searchingValue);

} 
