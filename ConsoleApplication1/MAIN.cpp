#include <iostream>
#include "point.h"
using namespace std;

int main() {
    Point p1, p2;
    float x1, y1, x2, y2;

    cout << "=== Saisie du premier point ===" << endl;
    cout << "x1 = "; cin >> x1;
    cout << "y1 = "; cin >> y1;
    p1 = Point(x1, y1);

    cout << "=== Saisie du deuxième point ===" << endl;
    cout << "x2 = "; cin >> x2;
    cout << "y2 = "; cin >> y2;
    p2 = Point(x2, y2);

    cout << "\nPoint 1 : "; p1.afficher();
    cout << "Point 2 : "; p2.afficher();
    cout << "Distance = " << p1.distance(p2) << endl;

    return 0;
}