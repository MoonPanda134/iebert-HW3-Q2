#include "Rectangle.h"
#include <iostream>

using std::cout;
using std::endl;

Rectangle::Rectangle(){

}

Rectangle::Rectangle(int newWidth, int newHeight){
    width = newWidth;
    height = newHeight;

}

int Rectangle::getArea(){
    return (width * height);
}

void Rectangle::draw(){
    for(int x=0; x<height; x++){
        for(int y=0; y<width; y++){
            cout << "*";
        }
        cout << endl;
    }
}