#ifndef RECT_H
#define RECT_H
#include "Shape.h"


class Rect: public Shape {
private:
    double width;
    double height;

public:
   Rect(double width, double height);
    double area() const override;
    double perimeter() const override;
};



#endif //RECT_H
