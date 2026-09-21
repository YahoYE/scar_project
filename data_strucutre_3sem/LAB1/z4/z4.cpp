#include <iostream>
#include <windows.h>
#include "tasks/tasks.h"
using namespace std;

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    cout << "======== Task 1 ========" << endl; task1(); cout << endl;
    cout << "======== Task 2 ========" << endl; task2(); cout << endl;
    cout << "======== Task 3 ========" << endl; task3(); cout << endl;
    cout << "======== Task 4 ========" << endl; task4(); cout << endl;
    cout << "======== Task 5 ========" << endl; task5(); cout << endl;
    cout << "======== Task 6 ========" << endl; task6(); cout << endl;
}