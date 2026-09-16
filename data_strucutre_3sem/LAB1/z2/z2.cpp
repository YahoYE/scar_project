#include <iostream>
#include <windows.h>
#include "t1.h"
#include "t2.h"
#include "t3.h"
using namespace std;

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    cout << "======== Task 1 ========" << endl; task1(); cout << endl;
    cout << "======== Task 2 ========" << endl; task1(); cout << endl;
    cout << "======== Task 3 ========" << endl; task3();
}