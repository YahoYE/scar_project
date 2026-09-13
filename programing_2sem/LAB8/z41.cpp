#include <iostream>
#include <vector>
#include <iomanip> // Для красивого вывода
#include <cmath>
#include <windows.h>
#include <ctime>

using namespace std;

// Функция проверки числа на простоту
bool isPrime(const int& n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Функция f(a) - сумма простых чисел в строке
int getRowPrimeSum(const vector<int>& row) {
    int sum = 0;
    for (int x : row) {
        if (isPrime(x)) {
            sum += x;
        }
    }
    return sum;
}

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    srand(time(0));

    int M = 5, N = 4;
    vector<vector<int>> matrix(M, vector<int>(N));

    cout << "=========== Исходная матрица ============" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            matrix[i][j] = rand() % 50; // Целые числа от 0 до 49
            cout << setw(4) << matrix[i][j] << " ";
        }
        cout << " | Сумма простых: " << getRowPrimeSum(matrix[i]) << endl;
    }

    for (int i = 0; i < M - 1; i++) {
        for (int j = 0; j < M - 1 - i; j++) {
            if (getRowPrimeSum(matrix[j]) < getRowPrimeSum(matrix[j + 1])) {
                swap(matrix[j], matrix[j + 1]);
            }
        }
    }

    cout << "\n=========== Матрица после сортировки ============" << endl;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << setw(4) << matrix[i][j] << " ";
        }
        cout << " | Сумма простых: " << getRowPrimeSum(matrix[i]) << endl;
    }

    return 0;
}