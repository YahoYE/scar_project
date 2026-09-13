#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите число: "; cin >> n;

    bool used[10] = {false};

    if (n == 0)
        used[0] = true;

    while (n > 0) {
        int digit = n % 10;
        used[digit] = true;
        n /= 10;
    }

    int count = 0;
    for (int i = 0; i < 10; i++)
        if (used[i]){
            count++;
            cout << i << endl;
        } 
        

    cout << "Уникальных чисел:" << count;
    return 0;
}
