#pragma once
#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction();
    Fraction(int numerator);
    Fraction(int numerator, int denominator);
    Fraction(const Fraction&);
    ~Fraction();

    int getDenominator();
       void setDenominator(int n);
      int getNumerator();

    void setNumerator(int n);
 
    int gcd(int n1, int n2);
    int lcm(int n1, int n2);
    void simplify();
    void reciprocal();

    // Member functions
    
    //Fraction operator+(const Fraction& other) const;
    //Fraction operator-(const Fraction& other) const;
    //Fraction operator*(const Fraction& other) const;
    //Fraction operator/(const Fraction& other) const;

    // Friend functions
    friend Fraction operator+(const Fraction& frac1, const Fraction& frac2);
    friend Fraction operator-(const Fraction& frac1, const Fraction& frac2);
    friend Fraction operator*(const Fraction& frac1, const Fraction& frac2);
    friend Fraction operator/(const Fraction& frac1, const Fraction& frac2);

    // Member functions
    
    //bool operator<(const Fraction& other) const;
    //bool operator>(const Fraction& other) const;
    //bool operator<=(const Fraction& other) const;
    //bool operator>=(const Fraction& other) const;
    //bool operator==(const Fraction& other) const;
    //bool operator!=(const Fraction& other) const;

    // Friend functions
    friend bool operator<(const Fraction& frac1, const Fraction& frac2);
    friend bool operator>(const Fraction& frac1, const Fraction& frac2);
    friend bool operator<=(const Fraction& frac1, const Fraction& frac2);
    friend bool operator>=(const Fraction& frac1, const Fraction& frac2);
    friend bool operator==(const Fraction& frac1, const Fraction& frac2);
    friend bool operator!=(const Fraction& frac1, const Fraction& frac2);

    // Compound assignment operators
    
    //Fraction& operator+=(const Fraction& other);
    //Fraction& operator-=(const Fraction& other);
    //Fraction& operator*=(const Fraction& other);
    //Fraction& operator/=(const Fraction& other);

    // Friend functions
    friend Fraction& operator+=(Fraction& frac1, const Fraction& frac2);
    friend Fraction& operator-=(Fraction& frac1, const Fraction& frac2);
    friend Fraction& operator*=(Fraction& frac1, const Fraction& frac2);
    friend Fraction& operator/=(Fraction& frac1, const Fraction& frac2);

    // Unary operators - member functions
    
    //Fraction& operator++();     // pre-increment
    //Fraction operator++(int);   // post-increment
    //Fraction& operator--();     // pre-decrement
    //Fraction operator--(int);   // post-decrement

    // Friend functions
    friend Fraction& operator++(Fraction& frac);    // pre-increment
    friend Fraction operator++(Fraction& frac, int); // post-increment
    friend Fraction& operator--(Fraction& frac);    // pre-decrement
    friend Fraction operator--(Fraction& frac, int); // post-decrement

    // Assignment operator
    Fraction& operator=(const Fraction& other);

    // Input/output operators
    friend std::istream& operator>>(std::istream& is, Fraction& fraction);
    friend std::ostream& operator<<(std::ostream& os, const Fraction& fraction);

  
};

#endif
