#ifndef POINT2D_HPP
#define POINT2D_HPP

#include <iostream>

class Point2D {
protected:
    double xCoord, yCoord;

public:
    Point2D(double x, double y);
    Point2D(const Point2D& other);
    ~Point2D();


    static double distance(const Point2D& p1, const Point2D& p2);
    
    Point2D& operator=(const Point2D& other);

    Point2D operator+(const Point2D& other) const;
    Point2D operator-(const Point2D& other) const;
    Point2D operator*(double scalar) const;
    Point2D operator/(double scalar) const;

    Point2D& operator+=(const Point2D& other);
    Point2D& operator-=(const Point2D& other);
    Point2D& operator*=(double scalar);
    Point2D& operator/=(double scalar);

    Point2D& operator++();     
    Point2D operator++(int);   
    Point2D& operator--();     
    Point2D operator--(int);   


    bool operator<(const Point2D& other) const;
    bool operator>(const Point2D& other) const;
    bool operator<=(const Point2D& other) const;
    bool operator>=(const Point2D& other) const;
    bool operator==(const Point2D& other) const;
    bool operator!=(const Point2D& other) const;


    friend std::ostream& operator<<(std::ostream& os, const Point2D& point);
    friend std::istream& operator>>(std::istream& is, Point2D& point);

};

#endif // POINT2D_HPP
