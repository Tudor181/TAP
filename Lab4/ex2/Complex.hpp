#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
using namespace std;

class Complex {
private:
 double imag_part;
    double real_part;
   

public:
    Complex();
    Complex(double real);
    Complex(double real, double imag);
    Complex(const Complex&);

    ~Complex();

    void print();

    Complex operator+(const Complex&) const;
    Complex operator-(const Complex&) const;
    Complex operator*(const Complex&) const;
    Complex operator/(const Complex&) const;

       Complex& operator++();      // pre-increment
    Complex operator++(int);    // post-increment
    Complex& operator--();      // pre-decrement
    Complex operator--(int);    // post-decrement

    bool operator<(const Complex&) const;
    bool operator>(const Complex&) const;
    bool operator<=(const Complex&) const;
    bool operator>=(const Complex&) const;
    bool operator==(const Complex&) const;
    bool operator!=(const Complex&) const;

    Complex& operator+=(const Complex&);
    Complex& operator-=(const Complex&);
    Complex& operator*=(const Complex&);
    Complex& operator/=(const Complex&);

     friend double modulus(const Complex& c);
    friend Complex conjugate(const Complex& c);

    Complex& operator=(const Complex& other);

    friend istream& operator>>(istream& is, Complex& complex);
    friend ostream& operator<<(ostream& os, const Complex& complex);



   
};

#endif
