#include "Triangle.h"
#include <cmath>
Triangle::Triangle(double side1, double side2, double side3) {
    sides[0] = side1;
    sides[1] = side2;
    sides[2] = side3;
}
double Triangle::area() const {
    double s= perimeter()/2;
    double area = sqrt(s*(s-sides[0])*(s-sides[1])*(s-sides[2]));
    return area;
}
double Triangle::perimeter() const {
    return (sides[0] + sides[1] + sides[2]);
}
