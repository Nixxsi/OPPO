#include <iostream>
#include <clocale>

double my_pow(double, unsigned int);

int main()
{
    using namespace std;
    setlocale(LC_ALL, "rus");

    double x;
    int y;
    cout << "Введите число и степень..." << endl;
    cin >> x >> y;

    if (y <= 0) {
        cout << "Некоректная степень" << endl;
    }
    else {
        cout << "Результат вычисления... " << my_pow(x, y) << endl;
    }
}

double my_pow(double x, unsigned int y) {

    double rez = 1.;
    for (int i = 0; i < y; i++) {
        rez *= x;
    }

    return rez;
}