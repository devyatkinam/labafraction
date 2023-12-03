#pragma once

#include <iostream>

class Fraction {
private:
    int num;
    int den;

    int gcd(int a, int b);
    void sim();

public:
    Fraction(int numerator, int denominator);
    Fraction(const Fraction& other);

    int getnum() const;
    int getden() const;

    Fraction add(const Fraction& other) const;
    Fraction mult(const Fraction& other) const;
    Fraction divide(const Fraction& other) const;

    void dis() const;
};
