#include "Triangle.h"
#include <iostream>

using std::cout;
using std::endl;

Triangle::Triangle(){

}

Triangle::Triangle(int newWidth, int newHeight){
    width = newWidth;
    height = newHeight;


}

int Triangle::getArea(){
    return ((width * height) / 2);
}

void Triangle::draw(){
    for(int x=0; x<height; x++){
        for(int i=1; i<(height-x); i++){
            cout << " ";
        }
        cout << "*";
        for(int i=0; i<(x*2); i++){
            cout << "*";
        }
        cout << endl;
    }
}