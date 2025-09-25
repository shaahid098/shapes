#include "Rect.h"

Rect::Rect(double width, double height) {
    this->width = width;
    this->height = height;
}

double Rect::area() const{
    return width * height;
}

double Rect::perimeter() const {
    return 2 * (width + height);
}