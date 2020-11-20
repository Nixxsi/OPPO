#include <iostream>
#include <clocale>

double my_pow(double, int);

int main()
{
    using namespace std;
    setlocale(LC_ALL, "rus");

    double x;
    int y;
    cout << "Введите число и степень..." << endl;
    cin >> x >> y;

    cout << "Результат вычисления... " << endl << my_pow(x, y) << endl;
    
}

double my_pow(double x, int y) {

    double rez = 1.;
    if (y > 0) {
        for (int i = 0; i < y; i++) {
            rez *= x;
        }
    }
    else {
        for (int i = 0; i < -y; i++) {
            rez *= x;

        }
    }
    return 1 / rez;
}