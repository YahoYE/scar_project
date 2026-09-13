#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>


double less(const std::string& filename) {
    std::ifstream file(filename);
    
    if (!file.is_open()) {
        std::cerr << "Ошибка: не удалось открыть файл " << filename << std::endl;
        return false;
    }

    double ch;
    double sum = 0;
    int counter;
    while (file >> ch && ch != 0) {
        sum += ch;
        counter++;
    }

    if (counter) {
        return sum / counter;
    }

    file.close();
    return 0.0; 
}

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
    std::string w1;
    std::cout << "Введите название файла (например, data.txt): ";
    std::cin >> w1;

    // Вычисление значения функции
    std::cout << "Срденее значение всех элементов: " << less(w1);
    return 0;
}