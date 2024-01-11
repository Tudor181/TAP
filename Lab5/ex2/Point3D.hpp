#ifndef POINT3D_HPP
#define POINT3D_HPP

#include <iostream>
#pragma once
#include "Point2D.h"  
using namespace std;

class Point3D : public Point2D {
private:
    double z;

public:
    Point3D(double x, double y, double z);
    
    Point3D(const Point3D& other);

    ~Point3D();

    Point3D& operator=(const Point3D& other);
    bool operator<(const Point3D& other) const;
    bool operator>(const Point3D& other) const;
    bool operator<=(const Point3D& other) const;
    bool operator>=(const Point3D& other) const;
    bool operator==(const Point3D& other) const;
    bool operator!=(const Point3D& other) const;

    Point3D operator+(const Point3D& other) const;
    Point3D operator-(const Point3D& other) const;
    Point3D operator*(double scalar) const;
    Point3D operator/(double scalar) const;

    Point3D& operator+=(const Point3D& other);
    Point3D& operator-=(const Point3D& other);
    Point3D& operator*=(double scalar);
    Point3D& operator/=(double scalar);

    Point3D& operator++();   // Pre-increment
    Point3D operator++(int);  // Post-increment
    Point3D& operator--();   // Pre-decrement
    Point3D operator--(int);  // Post-decrement

    friend ostream& operator<<(ostream& os, const Point3D& point);
    friend istream& operator>>(istream& is, Point3D& point);

    static double distance(const Point3D& p1, const Point3D& p2);
};



#endif // POINT3D_HPP