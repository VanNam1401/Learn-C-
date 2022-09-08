#include <iostream>
using namespace std;
class A
{
    public:
    int x;
    int y;
};
class B : public A
{
    public:
    
    void input()
    {
        cout << "enter x, y";
        cin >> x >> y;
    }
};
int main()
{
    B b;
    b.input();
}