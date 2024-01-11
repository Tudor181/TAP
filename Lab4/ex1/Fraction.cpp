#include "Fraction.hpp"
#include <iostream>
#include <string>

using namespace std;

Fraction::Fraction() {
    this->numerator = 0;
    this->denominator = 1;
}

Fraction::Fraction(int numerator) {
    this->numerator = numerator;
    this->denominator = 1;
}

Fraction::Fraction(int numerator, int denominator) {
    this->numerator = numerator;
    this->denominator = denominator;
}

Fraction::Fraction(const Fraction& other) {
    this->numerator = other.numerator;
    this->denominator = other.denominator;
}

Fraction::~Fraction() {
    this->numerator = 0;
    this->denominator = 0;
}

int Fraction::getNumerator() {
    return this->numerator;
}

int Fraction::getDenominator() {
    return this->denominator;
}

void Fraction::setNumerator(int n) {
    this->numerator = n;
}

void Fraction::setDenominator(int n) {
    this->denominator = n;
}

int Fraction::gcd(int n1, int n2) {
    int gcdNum;
    int copyA = n1, copyB = n2;
    if (n1 == n2) {
        gcdNum = n1;
        return gcdNum;
    }
    else {
        while (copyB) {
            int temp = copyA % copyB;
            copyA = copyB;
            copyB = temp;
        }
        gcdNum = copyA;
        return gcdNum;
    }
}

int Fraction::lcm(int n1, int n2) {
    return n1 * n2 / gcd(n1, n2);
}



Fraction operator+(const Fraction& frac1, const Fraction& frac2) {
    Fraction result;
    result.numerator = (frac1.numerator * frac2.denominator) + (frac2.numerator * frac1.denominator);
    result.denominator = frac1.denominator * frac2.denominator;
    return result;
}

Fraction operator-(const Fraction& frac1, const Fraction& frac2) {
    Fraction result;
    result.numerator = (frac1.numerator * frac2.denominator) - (frac2.numerator * frac1.denominator);
    result.denominator = frac1.denominator * frac2.denominator;
    return result;
}

Fraction operator*(const Fraction& frac1, const Fraction& frac2) {
    Fraction result;
    result.numerator = frac1.numerator * frac2.numerator;
    result.denominator = frac1.denominator * frac2.denominator;
    return result;
}

Fraction operator/(const Fraction& frac1, const Fraction& frac2) {
    Fraction result;
    result.numerator = frac1.numerator * frac2.denominator;
    result.denominator = frac1.denominator * frac2.numerator;
    return result;
}

void Fraction::simplify() {
    int n = gcd(numerator, denominator);
    this->numerator = numerator / n;
    this->denominator = denominator / n;
}

void Fraction::reciprocal() {
    swap(this->numerator, this->denominator);
}



bool operator<(const Fraction& frac1, const Fraction& frac2) {
    return (frac1.numerator * frac2.denominator < frac2.numerator * frac1.denominator);
}

bool operator>(const Fraction& frac1, const Fraction& frac2) {
    return (frac1.numerator * frac2.denominator > frac2.numerator * frac1.denominator);
}

bool operator<=(const Fraction& frac1, const Fraction& frac2) {
    return (frac1.numerator * frac2.denominator <= frac2.numerator * frac1.denominator);
}

bool operator>=(const Fraction& frac1, const Fraction& frac2) {
    return (frac1.numerator * frac2.denominator >= frac2.numerator * frac1.denominator);
}

bool operator==(const Fraction& frac1, const Fraction& frac2) {
    return (frac1.numerator * frac2.denominator == frac2.numerator * frac1.denominator);
}

bool operator!=(const Fraction& frac1, const Fraction& frac2) {
    return (frac1.numerator * frac2.denominator != frac2.numerator * frac1.denominator);
}



Fraction& operator+=(Fraction& frac1, const Fraction& frac2) {
    frac1.numerator = frac1.numerator * frac2.denominator + frac2.numerator * frac1.denominator;
    frac1.denominator = frac1.denominator * frac2.denominator;
    return frac1;
}

Fraction& operator-=(Fraction& frac1, const Fraction& frac2) {
    frac1.numerator = frac1.numerator * frac2.denominator - frac2.numerator * frac1.denominator;
    frac1.denominator = frac1.denominator * frac2.denominator;
    return frac1;
}

Fraction& operator*=(Fraction& frac1, const Fraction& frac2) {
    frac1.numerator *= frac2.numerator;
    frac1.denominator *= frac2.denominator;
    return frac1;
}

Fraction& operator/=(Fraction& frac1, const Fraction& frac2) {
    frac1.numerator *= frac2.denominator;
    frac1.denominator *= frac2.numerator;
    return frac1;
}

istream& operator>>(istream& is, Fraction& fraction) {
    is >> fraction.numerator >> fraction.denominator;
    return is;
}

ostream& operator<<(ostream& os, const Fraction& fraction) {
    os << fraction.numerator << "/" << fraction.denominator;
    return os;
}



Fraction& operator++(Fraction& frac) {
    frac.numerator += frac.denominator;
    return frac;
}

Fraction operator++(Fraction& frac, int) {
    Fraction temp(frac.numerator, frac.denominator);
    frac.numerator += frac.denominator;
    return temp;
}

Fraction& operator--(Fraction& frac) {
    frac.numerator -= frac.denominator;
    return frac;
}

Fraction operator--(Fraction& frac, int) {
    Fraction temp(frac.numerator, frac.denominator);
    frac.numerator -= frac.denominator;
    return temp;
}

// Assignment operator

Fraction& Fraction::operator=(const Fraction& other) {
    this->numerator = other.numerator;
    this->denominator = other.denominator;
    return *this;
}
