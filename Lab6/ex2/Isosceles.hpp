#ifndef ISOSCELES_HPP
#define ISOSCELES_HPP

#include "Triangle.hpp"

class Isosceles : public Triangle {
public:
    Isosceles(double equalSide, double differentSide);
    double area() override;
    double perimeter() override;
};

#endif
