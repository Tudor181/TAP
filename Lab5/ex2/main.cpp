#include <iostream>
#include <vector>
#include "Point2D.h"
#include "Point3D.h"

using namespace std;

int main()
{
    int num2DPoints;
    cout << "Number of 2D points: ";
    cin >> num2DPoints;
    vector<Point2D> vecPoints2D;
    for (int i = 0; i < num2DPoints; i++)
    {
        Point2D point2D(0, 0);
        cout << "Enter x and y for Point 2D: ";
        cin >> point2D;
        vecPoints2D.push_back(point2D);
    }
    cout << endl << "Random 2D Point: " << vecPoints2D[1];
    int num3DPoints;
    cout << "\nNumber of 3D points(AT LEAST 3): ";
    cin >> num3DPoints;
    vector<Point3D> vecPoints3D;
    for (int i = 0; i < num3DPoints; i++)
    {
        Point3D point3D(0, 0, 0);
        cout << "\nEnter x, y, and z for Point 3D: ";
        cin >> point3D;
        vecPoints3D.push_back(point3D);
    }
    cout << endl << "Random 3D Point: " << vecPoints3D[2];

    cout << endl << "Distance between first two 2D points: " << Point2D::distance(vecPoints2D[0], vecPoints2D[1]);
    cout << endl << "Distance between first two 3D points: " << Point3D::distance(vecPoints3D[0], vecPoints3D[1]) << endl;


}
