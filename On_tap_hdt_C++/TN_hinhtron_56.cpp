#include <iostream>
using namespace std;

class Point
{
public:
    int x;
    int y;
    Point()
    {
        x = 0;
        y = 0;
    }
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
};
class Circle : public Point
{
private:
    double r;

public:
    Circle()
    {
        r = 1;
    }
    Circle(int x, int y, double r) : r(r) {}
};
int main()
{
    Circle b;
}