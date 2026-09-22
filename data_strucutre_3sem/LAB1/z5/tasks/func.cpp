#include <iostream>
#include <string>

using namespace std;

template <typename T>
void printArr(const T arr[], int size, const string& name)
{
    cout << name << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}