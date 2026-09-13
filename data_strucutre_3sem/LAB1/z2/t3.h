#include <iostream>

using namespace std;

void task3()
{
    char a[8];
    cout << "Enter array of 8 chars" << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << "a[" << i << "]: ";
        string s;
        cin >> s;
        a[i] = s[0];
    }

    cout << "Your array is: " << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << a[i] << " ";
    }

    cout << "\nAll letters in your array:\n";
    for (int i = 0; i < 8; ++i) {
        if (a[i] >= 'a' && a[i] <= 'z') {
            cout << a[i] << " ";
        }
    }
    cout << endl;
}