#ifndef RIGHTTRIANGLEISOSCELES_HPP
#define RIGHTTRIANGLEISOSCELES_HPP

#include "RightTriangle.h"
#include "Isosceles.h"

class RightTriangleIsosceles : public RightTriangle, public Isosceles {
public:
    RightTriangleIsosceles(double equalSide, double differentSide);
    double area() override;
    double perimeter() override;
};

#endif
