#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Polygon.h"

class Rectangle: public Polygon{
    public:
    Rectangle();
    Rectangle(int newWidth, int newHeight);

    int getArea();
    void draw();


};


#endif //RECTANGLE_H