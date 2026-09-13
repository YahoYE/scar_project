#include <iostream>
#include <vector>
#include <cmath> 

using namespace std;

bool isComposite(int n) {
    n = abs(n);
    if (n < 4) return false; // 0, 1, 2, 3 не являются составными
    
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return true; // Нашли делитель -> число составное
    }
    return false; 
}

int main() {
    // Пример массива
    srand(0);
    
    cout << "=====Массив X=====\n";
    vector<int> numbers(20); 
    for (int i = 0; i < 20; i++) {
        numbers[i] = -10 + rand() % 20;
        cout << numbers[i] << "  ";
    }
    cout << "\n==================\n\n";

    // vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, -10};
    int sum = 0;

    cout << "Составные числа в массиве: \n";
    for (int val : numbers) {
        if (isComposite(val)) {
            cout << val << " ";
            sum += val;
        }
    }

    cout << "\nСумма составных чисел: " << sum << endl;

    return 0;
}