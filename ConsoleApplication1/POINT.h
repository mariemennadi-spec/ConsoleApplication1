#ifndef POINT_H
#define POINT_H

class Point {
private:
    float X, Y;

public:
    Point(float x = 0, float y = 0);
    float distance(const Point& p) const;
    void afficher() const;
};

#endif