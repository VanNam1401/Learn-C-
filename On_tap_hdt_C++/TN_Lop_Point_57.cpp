#include <iostream>
using namespace std;
class Point
{
    int xVal;
    int yVal;

public:
    Point(int x = 0, int y = 0)
    {
        xVal = x;
        yVal = y;
    }
    void display()
    {
        cout << "(" << xVal << "," << yVal << ")";
    }
};
int main()
{
    Point p(5);
    p.display();
}
// tham số mặc định được sử dụng trước tham số truyền vào.