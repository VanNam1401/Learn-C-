#include "Geometry.cpp"
#define Pi 3.14
using namespace std;

class Circle : public Geometry
{
private:
    int r;

public:
    Circle() {}
    Circle(int r)
    {
        this->r = r;
    }
    double perimeter()
    {
        return r * 2 * Pi;
    }
    double area()
    {
        return Pi * r * r;
    }
};
