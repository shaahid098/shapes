#include <iostream>
#include "Shape.h"
#include "Rect.h"
#include "Circle.h"
#include "Triangle.h"
#include "Shape.h"
#include "Square.h"

int main() {


    Rect *myRectangle= new Rect(12,9);
    std::cout <<"Rectangle's Area is: "<<myRectangle->area() << std::endl;
    std::cout <<"Rectangle's Perimeter is: "<<myRectangle->perimeter() << std::endl;

    Circle *myCircle= new Circle(32);
    std::cout <<"Circle's Area is: "<<myCircle->area() << std::endl;
    std::cout <<"Circle's Perimeter is: "<<myCircle->perimeter() << std::endl;

    Triangle *myTriangle= new Triangle(3,4,5);
    std::cout <<"Triangle's Area is: "<<myTriangle->area() << std::endl;
    std::cout <<"Triangle's Perimeter is: "<<myTriangle->perimeter() << std::endl;

    Square *mySquare= new Square(3);
    std::cout <<"Square's Area is: "<<mySquare->area() << std::endl;
    std::cout <<"Square's Perimeter is: "<<mySquare->perimeter() << std::endl;

    delete myRectangle;
    delete myCircle;
    delete myTriangle;
    delete mySquare;

    return 0;
}
