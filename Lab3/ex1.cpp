#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Line{
private:
    int coefM;
    int coefN;
public:
    Line(int m, int n)
    {
        this->coefM = m;
        this->coefN = n;
    }
    Line(const Line &line)
    {
        this->coefM = line.coefM;
        this->coefN = line.coefN;
    }
    void setM(int m)
    {
        this->coefM = m;
    }
    int getM()
    {
        return this->coefM;
    }
    void setN(int n)
    {
        this->coefN = n;
    }
    int getN()
    {
        return this->coefN;
    }
    ~Line()
    {
        cout << "Destructor apelat pentru linie." << endl;
    }
};

class Point{
private:
    int coordX, coordY;
public:
    static int positiveSemiPlane;
    static int negativeSemiPlane;
    static int lineSemiPlane;
    Point(int x, int y)
    {
        this->coordX = x;
        this->coordY = y;
        if (x > 0 || (x == 0 && y > 0)) {
            positiveSemiPlane++;
        } else if (x < 0 || (x == 0 && y < 0)) {
            negativeSemiPlane++;
        } else {
            lineSemiPlane++;
        }
    }
    Point(const Point &point)
    {
        this->coordX = point.coordX;
        this->coordY = point.coordY;
    }
    static Line *line;
    void setX(int x)
    {
        this->coordX = x;
    }
    int getX()
    {
        return this->coordX;
    }
    void setY(int y)
    {
        this->coordY = y;
    }
    int getY()
    {
        return this->coordY;
    }
    ~Point()
    {
        cout << "Destructor apelat pentru punct." << endl;
    }
    friend float distance(Point p1, Point p2);
    friend class Line;
};

Line* Point::line = nullptr;

float distance(Point p1, Point p2)
{
    return sqrt(pow(p1.coordX - p2.coordX, 2) + pow(p1.coordY - p2.coordY, 2));
}

float centerOfGravityOfPoints(vector<Point> points)
{
    float x = 0, y = 0;
    for (auto point : points) {
        x += point.getX();
        y += point.getY();
    }
    x /= points.size();
    y /= points.size();
    return distance(Point(x, y), Point(0, 0));
};

int main()
{
    int numPoints;
    cout << "Introduceti numarul de puncte: ";
    cin >> numPoints;

    vector<Point> points;
    // fisier>>points; fisier de tip fstream etc.

    cout << "Centrul de greutate al punctelor: " << centerOfGravityOfPoints(points) << endl;
    return 0;
}
