// 
//  Author : Isaiah Ebert
//  Program : HW3, Q2
//  Date Created : November 7, 2021
//  Date Last Modified : November 7, 2021
//  Usage : No command line arguments

//  Problem:
// Create two new classes that are children of Polygon. They should
// include a virtual funtion which gets the area.
// Demonstrate these classes in a main function.
//


//Main Program//


#include <iostream>
#include "Polygon.h"
#include "Rectangle.h"
#include "Triangle.h"


using namespace std;


void main(){
    Triangle t1(7, 10);
    t1.draw();
    cout << "The area of this object is: " << t1.getArea() << endl;

    Rectangle r1(7, 10);
    r1.draw();
    cout << "The area of this object is: " << r1.getArea() << endl;

    t1.setWidth(8);
    t1.setHeight(8);
    t1.draw();
    cout << "The area of this object is: " << t1.getArea() << endl;
    
    r1.setWidth(8);
    r1.setHeight(8);
    r1.draw();
    cout << "The area of this object is: " << r1.getArea() << endl;

    //Polygon p1(7, 10);
}

//QUESTION 1:
// 
//When compiling this is the error I get:
//ERROR: 
//'object of abstract class type "Polygon" is not allowed'
// 'function "Polygon::getArea" is a pure virtual function'
// 'function "Polygon::draw" is a pure virtual function'

//QUESTION 2:
//
//When compiling this is the error I get:
//ERROR:
//'unresolved external symbol "public: virtual int_thiscall Polygon::getArea(void)"'
// 'function definition not found'
//'unresolved external symbol "public: virtual void_thiscall Polygon::draw(void)"'
// 'function definition not found'


