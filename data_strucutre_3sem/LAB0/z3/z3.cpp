#include "tasks/tasks.h"
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    cout << "======== Task 1 ========" << endl;
    task1();
    cout << endl;
    cout << "======== Task 2 ========" << endl;
    task1();
    cout << endl;
}