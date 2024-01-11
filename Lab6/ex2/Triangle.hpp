#ifndef Triange_HPP
#define Triangle_HPP
#pragma once
#include <cmath>

class Triangle {
protected:
    double side1, side2, side3;

public:
    Triangle(double s1, double s2, double s3);
    virtual double perimeter() = 0;
    virtual double area() = 0;
};


#endif // Triangle_HPP