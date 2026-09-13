// Заданы две строки длиной m и n, причем m > n. Проверить, входит ли меньшая строка в большую
#include <iostream>
using namespace std;



int main() {
    string s1, s2;
    cout << "Введите большую строку: "; getline(cin, s1);
    cout << "Введите меньшую строку: "; getline(cin, s2);

    if (s1.find(s2) != string::npos) cout << "Меньшая строка найденна в большей!";
    else cout << "Ничего не нашлось :(";

    return 0;
}