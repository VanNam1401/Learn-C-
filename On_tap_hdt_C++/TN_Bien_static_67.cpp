#include <iostream>
using namespace std;

class Point
{
public:
    static int count;
    Point()
    {
        count++;
    }
    void display()
    {
        cout << count;
    }
};
int Point::count = 0;
int main()
{
    Point p1, p2, p3, p4;
    p4.display();

    return 0;
}