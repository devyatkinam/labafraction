#include "fraction.h"
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int m, n, l, s;
    cout << "��������� ������ �����:" << endl;
        cin >> m;
        cout << "����������� ������ �����:" << endl;
        cin >> n;
        cout << "��������� ������ �����:" << endl;
        cin >> l;
        cout << "����������� ������ �����:" << endl;
        cin >> s;
    Fraction frac1(m, n);
    Fraction frac2(l, s);

    cout << "����� 1: ";
    frac1.dis();
    cout << "\n����� 2: ";
    frac2.dis();

    Fraction sum = frac1.add(frac2);
    Fraction mult = frac1.mult(frac2);
    Fraction quot = frac1.divide(frac2);
cout << "\n�����: ";
    sum.dis();
cout << "\n������������: ";
    mult.dis();
cout << "\n�������: ";
    quot.dis();

    return 0;
}
