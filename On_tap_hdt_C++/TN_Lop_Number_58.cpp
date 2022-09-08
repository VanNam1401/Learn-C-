#include <iostream>
using namespace std;
class Number
{
    int n;
    Point(int n)
    {
        this->n = n;
    }
    void display()
    {
        cout << n;
    }
};
int main()
{
    Number num(10);
    num.display();
}