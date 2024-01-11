#include "Point3D.h"
#include <cmath>

Point3D::Point3D(double x, double y, double z) : Point2D(x, y), z(z) {}

Point3D::Point3D(const Point3D& other) : Point2D(other), z(other.z) {}

Point3D::~Point3D() {
    this->z = 0;
}

Point3D& Point3D::operator=(const Point3D& other) {
    if (this != &other) {
        Point2D::operator=(other);
        z = other.z;
    }
    return *this;
}

bool Point3D::operator<(const Point3D& other) const {
    return (x < other.x) || ((x == other.x) && ((y < other.y) || ((y == other.y) && (z < other.z))));
}

bool Point3D::operator>(const Point3D& other) const {
    return other < *this;
}

bool Point3D::operator<=(const Point3D& other) const {
    return !(*this > other);
}

bool Point3D::operator>=(const Point3D& other) const {
    return !(*this < other);
}

bool Point3D::operator==(const Point3D& other) const {
    return (x == other.x) && (y == other.y) && (z == other.z);
}

bool Point3D::operator!=(const Point3D& other) const {
    return !(*this == other);
}

Point3D Point3D::operator+(const Point3D& other) const {
    return Point3D(x + other.x, y + other.y, z + other.z);
}

Point3D Point3D::operator-(const Point3D& other) const {
    return Point3D(x - other.x, y - other.y, z - other.z);
}

Point3D Point3D::operator*(double scalar) const {
    return Point3D(x * scalar, y * scalar, z * scalar);
}

Point3D Point3D::operator/(double scalar) const {
    if (scalar == 0) {
        cerr << "Error! Division by zero." << endl;
        return Point3D(0, 0, 0);
    }
    return Point3D(x / scalar, y / scalar, z / scalar);
}

Point3D& Point3D::operator+=(const Point3D& other) {
    x += other.x;
    y += other.y;
    z += other.z;
    return *this;
}

Point3D& Point3D::operator-=(const Point3D& other) {
    x -= other.x;
    y -= other.y;
    z -= other.z;
    return *this;
}

Point3D& Point3D::operator*=(double scalar) {
    x *= scalar;
    y *= scalar;
    z *= scalar;
    return *this;
}

Point3D& Point3D::operator/=(double scalar) {
    if (scalar == 0) {
        cerr << "Error! Division by zero." << endl;
        return *this;
    }
    x /= scalar;
    y /= scalar;
    z /= scalar;
    return *this;
}

Point3D& Point3D::operator++() {
    ++x;
    ++y;
    ++z;
    return *this;
}

Point3D Point3D::operator++(int) {
    Point3D temp(*this);
    ++(*this);
    return temp;
}

Point3D& Point3D::operator--() {
    --x;
    --y;
    --z;
    return *this;
}

Point3D Point3D::operator--(int) {
    Point3D temp(*this);
    --(*this);
    return temp;
}

ostream& operator<<(ostream& os, const Point3D& point) {
    os << "(" << point.x << ", " << point.y << ", " << point.z << ")";
    return os;
}

istream& operator>>(istream& is, Point3D& point) {
    is >> point.x >> point.y >> point.z;
    return is;
}

double Point3D::distance(const Point3D& p1, const Point3D& p2) {
    double dx = p1.x - p2.x;
    double dy = p1.y - p2.y;
    double dz = p1.z - p2.z;
    return sqrt(dx * dx + dy * dy + dz * dz);
}
