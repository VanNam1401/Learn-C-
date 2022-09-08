#include <iostream>
#include <math.h>
#pragma once

using namespace std;

class Geometry
{
public:
    virtual double perimeter() = 0;
    virtual double area() = 0;
    virtual void display()
    {
        cout << "Perimater: " << perimeter() << endl;
        cout << "Area: " << area() << endl;
    }
};