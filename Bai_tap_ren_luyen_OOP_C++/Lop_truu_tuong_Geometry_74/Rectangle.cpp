#include "Geometry.cpp"
using namespace std;

class Rectangle : public Geometry
{
private:
    int h;
    int w;

public:
    Rectangle() {}
    Rectangle(int w, int h)
    {
        this->h = h;
        this->w = w;
    }
    double perimeter()
    {
        return (h + w) * 2;
    }
    double area()
    {
        return h * w;
    }
};