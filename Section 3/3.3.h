#include <iostream>
#include <cmath>
using namespace std;

class Point {
private:
    int x, y;

public:
    Point(int x = 0, int y = 0) : x{x}, y{y} {}
    const int getX() const { return x; }
    const int getY() const { return y; }
    void setX(const int x) { this->x = x; }
    void setY(const int y) { this->y = y; }
    double distance(const Point &b);
};