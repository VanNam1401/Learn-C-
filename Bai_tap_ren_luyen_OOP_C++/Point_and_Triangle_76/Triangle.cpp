#include "Point.cpp"
using namespace std;

class Triangle 
{
    Point A;
    Point B;
    Point C;

public:
    Triangle() {}
    Triangle(Point A, Point B, Point C)
    {
        this->A = A;
        this->B = B;
        this->C = C;
    }
    Point getA()
    {
        return this->A;
    }
    Point getB()
    {
        return this->B;
    }
    Point getC()
    {
        return this->C;
    }
    double perimeter()
    {
        return A.distance(B) + B.distance(C) + C.distance(A);
    }
    double area()
    {
        return abs((B.x - A.x) * (C.y - A.y) - (C.x - A.x) * (B.y - A.y)) * 0.5;
    }
    Point center()
    {
        double x1 = (A.getX() + B.getX() + C.getX()) / 3;
        double y1 = (A.getY() + B.getY() + C.getY()) / 3;
        return Point(x1, y1);
    }
    bool isTriangle()
    {
        double a = A.distance(B);
        double b = B.distance(C);
        double c = C.distance(A);
            if (a + b > c && a+ c > b && c + b > a & a > 0 & b > 0 & c > 0)
            {
                return true;
            }
            return false;
    }
    void display()
	{
		A.display();
		B.display();
		C.display();
	}
};

int main()
{
    
    Point A(1,2);  // kết quả có thể ra khác nhau tùy vào cách viết hàm ở 2 lớp Point, Triangle
    Point B(4,5);
    //Point C = B - A;
   // C.display();


    Triangle tri(Point(1,2), Point(4,5), Point(6,7)); 

    cout << "Perimeter: " << tri.perimeter() << endl;  
    cout << "Area: " << tri.area() << endl;


    tri.center().display(); // tri.center() trả về điểm có tọa độ trọng tâm, có hoành độ x, tung độ y
                            // Point G = tri.center(); tạo ra G và gán tri.center() cho G
                            // G.display()    sau đó gọi hàm display() , đây là cách viết khác

    Point(5,5).display(); // in ra x = 5, y = 5

    cout << tri.isTriangle(); // nếu là false in ra 0, true in ra 1

    cout << endl;

}