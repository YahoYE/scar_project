#include <iostream>
#include <vector>
#include <windows.h>
#include <iomanip> // Для красивого вывода

using namespace std;

struct RowInfo 
{
    double minVal;
    int rowIndex;
};

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
    srand(time(0)); 

    int M = 5, N = 4; 
    vector<vector<double>> matrix(M, vector<double>(N));
    vector<RowInfo> info(M);

    cout << "=========== Исходная матрица ============" << endl;
    for (int i = 0; i < M; i++) 
    {
        double currentMin; 
        for (int j = 0; j < N; j++) 
        {
            // Генерируем числа от -100.0 до +100.0
            matrix[i][j] = (rand() % 2001 -1000) / 10.0;
            cout << setw(6) << matrix[i][j] << " ";

            if (j == 0 || matrix[i][j] < currentMin) {currentMin = matrix[i][j];}
        }
        
        // Заполняем структуру для текущей строки
        info[i].minVal = currentMin;
        info[i].rowIndex = i;

        // Печатаем матрицу
        cout << " | Min: " << currentMin << endl;
    }
    cout << endl;

    // Сортировка
    for (int i = 0; i < M -1; i++)
    {
        int min_inx = i;
        for (int j = i; j < M; j++)
        {
            if (info[j].minVal < info[min_inx].minVal)
            {
                min_inx = j;
            }
        }

        if (min_inx != i)
        {
            RowInfo temp = info[i];
            info[i] = info[min_inx];
            info[min_inx] = temp;
        }
    }
    

    cout << "========== Отсортированная матрица ==========" << endl;
    for (int i = 0; i < M; i++) {
        int targetRow = info[i].rowIndex;
        for (int j = 0; j < N; j++) {
            cout << setw(6) << matrix[targetRow][j] << " ";
        }
        cout << " | Min: " << info[i].minVal << endl;
    }
    return 0;
}

