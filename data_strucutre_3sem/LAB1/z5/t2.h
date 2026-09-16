#include <iostream>

using namespace std;

void task1()
{
    bool* arr = new bool[8] {true, false, true, true, false, true, false, false};
    cout << "Array of bool:\n";
    for (int i = 0; i < 8; i++) {
        cout << arr[i] << " ";
        delete[] arr;
    }
}