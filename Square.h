#ifndef SQUARE_H
#define SQUARE_H
#include "Rect.h"


class Square: public Rect {
public:
    Square(double width): Rect(width, width) {};
};



#endif //SQUARE_H
