#include <iostream>
#include <vector>

using namespace std;

vector<double> f(vector<int> x) {
    double sum = 0;
    
    for (int val : x) {
        sum += val; 
    }

    double m = sum / x.size(); 
    cout << "Среднее значение X: " << m << endl << endl;

    vector<double> y;
    for (int val : x) {
        y.push_back(val - m);
    }

    return y;
}

int main() {
    srand(time(0));
    
    cout << "=====Массив X=====\n";
    vector<int> x(4); 
    for (int i = 0; i < 4; i++) {
        x[i] = 1 + rand() % 10;
        cout << x[i] << "  ";
    }
    cout << endl;
    cout << "==================\n";

    // Вызываем функцию f
    vector<double> y = f(x);
    cout << "=====Массив по правилу (y=x-m)=====\n";
    for (double val : y) {
        cout << val << "  ";
    }
    cout << endl;

    return 0;
}