#include <iostream>
#include <cmath>
#include "point.h"
using namespace std;

Point::Point(float x, float y) : X(x), Y(y) {}

float Point::distance(const Point& p) const {
    float dx = p.X - X;
    float dy = p.Y - Y;
    return sqrt(dx * dx + dy * dy);
}

void Point::afficher() const {
    cout << "(" << X << ", " << Y << ")" << endl;
}