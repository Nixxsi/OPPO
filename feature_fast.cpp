#include <iostream>
#include <clocale>

int binpow(int a, int n);

int main()
{
    using namespace std;
    setlocale(LC_ALL, "rus");

    int x;
    int y;
    cout << "Введите число и степень..." << endl;
    cin >> x >> y;

    if (y < 0) {
        cout << "Некоректная степень" << endl;
    }
    else {
        cout << "Результат вычисления... " << endl << binpow(x, y) << endl;
    }
}

int binpow(int a, int n) {
    if (n == 0)
        return 1;
    if (n % 2 == 1)
        return binpow(a, n - 1) * a;
    else {
        int b = binpow(a, n / 2);
        return b * b;
    }
}