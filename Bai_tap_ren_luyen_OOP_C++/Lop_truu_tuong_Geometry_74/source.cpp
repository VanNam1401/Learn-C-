#include "Geometry.cpp"
#include "Triangle.cpp"
#include "Rectangle.cpp"
#include "Circle.cpp"
using namespace std;
int main()
{
    Geometry *g[3];

    g[0] = new Triangle(7, 10, 13);
    g[1] = new Circle(5);
    g[2] = new Rectangle(2, 4);

    for (int i = 0; i < 3; i++)
    {
        g[i]->display();
        cout << "____________" << endl;
    }

    cout << endl;
}