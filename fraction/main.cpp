#include "fraction.h"
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int m, n, l, s;
    cout << "Числитель первой дроби:" << endl;
        cin >> m;
        cout << "Знаменатель первой дроби:" << endl;
        cin >> n;
        cout << "Числитель второй дроби:" << endl;
        cin >> l;
        cout << "Знаменатель второй дроби:" << endl;
        cin >> s;
    Fraction frac1(m, n);
    Fraction frac2(l, s);

    cout << "Дробь 1: ";
    frac1.dis();
    cout << "\nДробь 2: ";
    frac2.dis();

    Fraction sum = frac1.add(frac2);
    Fraction mult = frac1.mult(frac2);
    Fraction quot = frac1.divide(frac2);
cout << "\nСумма: ";
    sum.dis();
cout << "\nПроизведение: ";
    mult.dis();
cout << "\nЧастное: ";
    quot.dis();

    return 0;
}
