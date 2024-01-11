#ifndef RIGHT_TRIANGLE_HPP
#define RIGHT_TRIANGLE_HPP

#include "Triangle.hpp"

class RightTriangle : public Triangle {
public:
    RightTriangle(double side1, double side2, double hypotenuse);
    double area() override;
    double perimeter() override;
};

#endif
