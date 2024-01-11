#include "RightTriangleIsosceles.hpp"
#include <cmath>

RightTriangleIsosceles::RightTriangleIsosceles(double equalSide, double differentSide) : RightTriangle(equalSide, differentSide), Isosceles(equalSide, differentSide) {}

double RightTriangleIsosceles::perimeter() {
    return Triangle::side1 + Triangle::side2 + Triangle::side3;
}

double RightTriangleIsosceles::area() {
    double s = (Triangle::side1 + Triangle::side2 + Triangle::side3) / 2;
    return sqrt(s * (s - Triangle::side1) * (s - Triangle::side2) * (s - Triangle::side3));
}


