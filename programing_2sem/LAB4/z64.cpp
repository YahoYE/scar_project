#include <iostream>
#include <time.h>
#include <random>

using namespace std;

int main() {
    srand(time(NULL));
    int A[4][4], temp[4][4], result[4][4];

    // Рандом матрица
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            A[i][j] = 1 + rand() % 10;
            result[i][j] = A[i][j];
        }
    }


    // возведение в степень
    int n;
    cout << "Введите число : "; cin >> n;
    for (int k = 1; k < n; k++) 
        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 4; j++) {
                temp[i][j] = 0;
                for (int t = 0; t < 4; t++)
                    temp[i][j] += result[i][t] * A[t][j];}

        // копируем temp в result
        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 4; j++)
                result[i][j] = temp[i][j];


    // Вывод исходной матрицы
    cout << "=========Матрица A=========" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }

    if (n == 1){
        cout << "=========Матрица B=========" << endl;
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                cout << A[i][j] << "\t";
            }
            cout << endl;
    }
    }
    else{
        // Вывод матрицы в степени N
        cout << "=========Матрица B=========" << endl;
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                cout << result[i][j] << "\t";
            }
            cout << endl;
        }
    }
    return 0;
}
