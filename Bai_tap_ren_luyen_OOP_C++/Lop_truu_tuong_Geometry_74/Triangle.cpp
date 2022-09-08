#include "Geometry.cpp"
using namespace std;

class Triangle : public Geometry
{
private:
    int a;
    int b;
    int c;

public:
    Triangle(){}
    Triangle(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    double perimeter()
    {
        return this->a + this->b + this->c;
    }
    double area()
    {
        double p = perimeter() / 2.0;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }
};