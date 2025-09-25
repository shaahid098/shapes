#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"



class Circle : public Shape{
private:
    double radius;

public:
    Circle(double radius);
    double area() const override;
    double perimeter() const override;
};



#endif //CIRCLE_H
