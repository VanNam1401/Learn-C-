#include <bits/stdc++.h>
using namespace std;

class A
{
protected:
    int x = 2;

public:
};
class B : public A
{
public:
    void display()
    {
        cout << x;
    }
};
int main()
{
    B b;
    b.display();
    return 0;
}