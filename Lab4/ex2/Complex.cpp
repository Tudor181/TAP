#include "Complex.hpp"
#include <cmath>
#include <iostream>
using namespace std;

Complex::Complex() : real_part(0.0), imag_part(0.0) {}

Complex::Complex(double real) : real_part(real), imag_part(0.0) {}

Complex::Complex(double real, double imag) : real_part(real), imag_part(imag) {}

Complex::Complex(const Complex& c) : real_part(c.real_part), imag_part(c.imag_part) {}

Complex::~Complex() {}

Complex Complex::operator+(const Complex& other) const {
    return Complex(real_part + other.real_part, imag_part + other.imag_part);
}

Complex Complex::operator-(const Complex& other) const {
    return Complex(real_part - other.real_part, imag_part - other.imag_part);
}

Complex Complex::operator*(const Complex& other) const {
    return Complex((real_part * other.real_part) - (imag_part * other.imag_part), (real_part * other.imag_part) + (imag_part * other.real_part));
}

Complex Complex::operator/(const Complex& other) const {
    double denominator = other.real_part * other.real_part + other.imag_part * other.imag_part;
    return Complex((real_part * other.real_part + imag_part * other.imag_part) / denominator, (imag_part * other.real_part - real_part * other.imag_part) / denominator);
}

bool Complex::operator<(const Complex& other) const {
    return (real_part * real_part + imag_part * imag_part) < (other.real_part * other.real_part + other.imag_part * other.imag_part);
}

bool Complex::operator>(const Complex& other) const {
    return (real_part * real_part + imag_part * imag_part) > (other.real_part * other.real_part + other.imag_part * other.imag_part);
}

bool Complex::operator<=(const Complex& other) const {
    return (real_part * real_part + imag_part * imag_part) <= (other.real_part * other.real_part + other.imag_part * other.imag_part);
}

bool Complex::operator>=(const Complex& other) const {
    return (real_part * real_part + imag_part * imag_part) >= (other.real_part * other.real_part + other.imag_part * other.imag_part);
}

bool Complex::operator==(const Complex& other) const {
    return (real_part == other.real_part) && (imag_part == other.imag_part);
}

bool Complex::operator!=(const Complex& other) const {
    return !(*this == other);
}

Complex& Complex::operator+=(const Complex& other) {
    real_part += other.real_part;
    imag_part += other.imag_part;
    return *this;
}

Complex& Complex::operator-=(const Complex& other) {
    real_part -= other.real_part;
    imag_part -= other.imag_part;
    return *this;
}

Complex& Complex::operator*=(const Complex& other) {
    double temp_real = real_part * other.real_part - imag_part * other.imag_part;
    imag_part = real_part * other.imag_part + imag_part * other.real_part;
    real_part = temp_real;
    return *this;
}

Complex& Complex::operator/=(const Complex& other) {
    double denominator = other.real_part * other.real_part + other.imag_part * other.imag_part;
    double temp_real = (real_part * other.real_part + imag_part * other.imag_part) / denominator;
    imag_part = (imag_part * other.real_part - real_part * other.imag_part) / denominator;
    real_part = temp_real;
    return *this;
}

Complex& Complex::operator++() {
    real_part++;
    return *this;
}

Complex Complex::operator++(int) {
    Complex temp(*this);
    ++(*this);
    return temp;
}

Complex& Complex::operator--() {
    real_part--;
    return *this;
}

Complex Complex::operator--(int) {
    Complex temp(*this);
    --(*this);
    return temp;
}

Complex& Complex::operator=(const Complex& other) {
    if (this != &other) {
        real_part = other.real_part;
        imag_part = other.imag_part;
    }
    return *this;
}

istream& operator>>(istream& is, Complex& complex) {
    cout << "Real part: ";
    is >> complex.real_part;
    cout << "Imaginary part: ";
    is >> complex.imag_part;
    return is;
}

ostream& operator<<(ostream& os, const Complex& complex) {
    if (complex.imag_part >= 0)
        os << complex.real_part << " + " << complex.imag_part << "i";
    else
        os << complex.real_part << " - " << -complex.imag_part << "i";
    return os;
}

double modulus(const Complex& c) {
    return sqrt(c.real_part * c.real_part + c.imag_part * c.imag_part);
}

Complex conjugate(const Complex& c) {
    return Complex(c.real_part, -c.imag_part);
}

void Complex::print() {
    if (imag_part >= 0)
        cout << real_part << " + " << imag_part << "i" << endl;
    else
        cout << real_part << " - " << -imag_part << "i" << endl;
}
