#include "Isosceles.hpp"
#include <cmath>

Isosceles::Isosceles(double equalSide, double differentSide) : Triangle(equalSide, equalSide, differentSide) {}

double Isosceles::area() {
    double height = sqrt(pow(l1, 2) - pow(l3 / 2, 2)); 
    return (l3 * height) / 2; 
}

double Isosceles::perimeter() {
    return l1 + l2 + l3;
}
