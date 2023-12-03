#include "fraction.h"
using namespace std;
int Fraction::gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

void Fraction::sim() {
    int common = gcd(num, den);
    num /= common;
    den /= common;

    if (den < 0) {
        num = -num;
        den = -den;
    }
}

Fraction::Fraction(int numerator, int denominator) : num(numerator), den(denominator) {
    if (den == 0) {
        cerr << "Делить на 0 нельзя" << endl;
        exit(1);
    }
    sim();
}

Fraction::Fraction(const Fraction& other) : num(other.num), den(other.den) {
    sim();
}

int Fraction::getnum() const {
    return num;
}

int Fraction::getden() const {
    return den;
}

Fraction Fraction::add(const Fraction& other) const {
    int newNum = num * other.den + other.num * den;
    int newDen = den * other.den;
    return Fraction(newNum, newDen);
}

Fraction Fraction::mult(const Fraction& other) const {
    int newNum = num * other.num;
    int newDen = den * other.den;
    return Fraction(newNum, newDen);
}

Fraction Fraction::divide(const Fraction& other) const {
    if (other.num == 0) {
        cerr << "Делить на 0 нельзя" << endl;
        exit(1);
    }
    int newNum = num * other.den;
    int newDen = den * other.num;
    return Fraction(newNum, newDen);
}

void Fraction::dis() const {
    cout << num << "/" << den;
}
