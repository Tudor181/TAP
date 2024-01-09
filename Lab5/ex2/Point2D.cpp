#include "Point2D.hpp"
#include <cmath>

Point2D::Point2D(double x, double y) : xCoord(x), yCoord(y) {}

Point2D::Point2D(const Point2D& other) : xCoord(other.xCoord), yCoord(other.yCoord) {}

Point2D::~Point2D() {}

Point2D& Point2D::operator=(const Point2D& other) {
    if (this != &other) {
        xCoord = other.xCoord;
        yCoord = other.yCoord;
    }
    return *this;
}


bool Point2D::operator<(const Point2D& other) const {
    return (xCoord < other.xCoord) || ((xCoord == other.xCoord) && (yCoord < other.yCoord));
}

bool Point2D::operator>(const Point2D& other) const {
    return other < *this;
}

bool Point2D::operator<=(const Point2D& other) const {
    return !(other < *this);
}

bool Point2D::operator>=(const Point2D& other) const {
    return !(*this < other);
}

bool Point2D::operator==(const Point2D& other) const {
    return (xCoord == other.xCoord) && (yCoord == other.yCoord);
}

bool Point2D::operator!=(const Point2D& other) const {
    return !(*this == other);
}


Point2D Point2D::operator+(const Point2D& other) const {
    return Point2D(xCoord + other.xCoord, yCoord + other.yCoord);
}

Point2D Point2D::operator-(const Point2D& other) const {
    return Point2D(xCoord - other.xCoord, yCoord - other.yCoord);
}

Point2D Point2D::operator*(double scalar) const {
    return Point2D(xCoord * scalar, yCoord * scalar);
}

Point2D Point2D::operator/(double scalar) const {
    if (scalar == 0) {
        throw std::invalid_argument("Division by zero");
    }
    return Point2D(xCoord / scalar, yCoord / scalar);
}


Point2D& Point2D::operator+=(const Point2D& other) {
    xCoord += other.xCoord;
    yCoord += other.yCoord;
    return *this;
}

Point2D& Point2D::operator-=(const Point2D& other) {
    xCoord -= other.xCoord;
    yCoord -= other.yCoord;
    return *this;
}

Point2D& Point2D::operator*=(double scalar) {
    xCoord *= scalar;
    yCoord *= scalar;
    return *this;
}

Point2D& Point2D::operator/=(double scalar) {
    if (scalar == 0) {
        throw std::invalid_argument("Division by zero");
    }
    xCoord /= scalar;
    yCoord /= scalar;
    return *this;
}

// Increment and Decrement operators
Point2D& Point2D::operator++() {  // Pre-increment
    ++xCoord;
    ++yCoord;
    return *this;
}

Point2D Point2D::operator++(int) {  // Post-increment
    Point2D temp(*this);
    ++(*this);
    return temp;
}

Point2D& Point2D::operator--() {  // Pre-decrement
    --xCoord;
    --yCoord;
    return *this;
}

Point2D Point2D::operator--(int) {  // Post-decrement
    Point2D temp(*this);
    --(*this);
    return temp;
}


std::ostream& operator<<(std::ostream& os, const Point2D& point) {
    os << "X coordinate: " << point.xCoord << ", Y coordinate: " << point.yCoord;
    return os;
}

std::istream& operator>>(std::istream& is, Point2D& point) {
    is >> point.xCoord >> point.yCoord;
    return is;
}


double Point2D::distance(const Point2D& p1, const Point2D& p2) {
    return std::sqrt(std::pow((p2.xCoord - p1.xCoord), 2) + std::pow((p2.yCoord - p1.yCoord), 2));
}
