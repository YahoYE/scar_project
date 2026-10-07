#include "tasks.h"
#include <iostream>

using namespace std;

//TODO: naming
void CodePrint(const float array[], const int size, const string name)
{
    cout << name << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

//TODO: naming

int Count(const float array[], const float searchingValue)
{
    int counter = 0;
    for (int i = 0; i <= 12; i++)
    {
        if (array[i] >= searchingValue)
        {
            counter += 1;
        }
    }
    return counter;
}

void task2()
{
    const int size = 12;
    float l[size] = {12.0, 21.5, 119.2, -80.7, 300.0, 75.5,
        81.2, 8.1, 47.3, 31.2, 85.3, 100.1};
    CodePrint(l, size, "Source array is:");
    cout << endl;
    float searchingValue;
    cout << "Enter searching value: ";
    cin >> searchingValue;
    cout << "Elements of array more than ";
    cout << searchingValue << ": " << Count(l, searchingValue);
} 
