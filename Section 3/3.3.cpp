#include "geometry.h"

// return the distance to another Point
double Point::distance(const Point &p) {
    double a = abs(p.getX() - getX());
    double b = abs(p.getY() - getY());
    return sqrt(a * a + b * b);
}

int main() {
    Point p1 = Point();
    Point p2 = Point(1, 2);
    
    cout<< p1.get_x()<< '\n' << p2.get_x() << '\n';
    
    p1.setX(3);
    p1.setY(4);
    
    cout << p1.get_x() << '\n';
    
    p2.setX(5);
    p2.setY(6);
    
    cout << p2.get_x() << '\n';
    return 0;
}
