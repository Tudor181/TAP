#include "RightTriangle.hpp"
#include <cmath>

RightTriangle::RightTriangle(double side1, double side2, double hypotenuse) : Triangle(side1, side2, hypotenuse) {}

double RightTriangle::area() {
    double semiPerimeter = (side1 + side2 + hypotenuse) / 2.0;
    return (side1 * side2) / 2.0;
}

double RightTriangle::perimeter() {
    return side1 + side2 + hypotenuse;
}
