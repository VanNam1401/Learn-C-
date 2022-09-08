#include <bits/stdc++.h>
using namespace std;

class A 
{
    public:
    A()
    {
        cout << 1;
    }
    ~A()
    {
        cout << 2;
    }
};
class B
{
private:
    /* data */
public:
    B(/* args */)
    {
        cout << 3;
    }
    ~B()
    {
        cout << 4;
    }
};

class C : public A, B
{
    public:
    C()
    {
        cout << 5;
    }
    ~C()
    {
        cout << 6;
    }
};

int main()
{
    C c;
    return 0;
}
