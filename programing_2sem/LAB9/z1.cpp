#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>


bool less(const std::string& filename) {
    std::ifstream file(filename);
    
    if (!file.is_open()) {
        std::cerr << "Ошибка: не удалось открыть файл " << filename << std::endl;
        return false;
    }

    char ch;
    while (file >> ch && ch != '.') {
        if (ch >= 'A' && ch <= 'Z') {
            file.close();
            return true;  
        }
    }

    file.close();
    return false; 
}

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    
    std::string w1;
    std::cout << "Введите название файла (например, data.txt): ";
    std::cin >> w1;

    // Вычисление значения функции
    if (less(w1)) {
        std::cout << "Результат less(w1): True (файл содержит заглавные буквы)" << std::endl;
    } else {
        std::cout << "Результат less(w1): False (заглавные буквы не найдены)" << std::endl;
    }

    return 0;
}