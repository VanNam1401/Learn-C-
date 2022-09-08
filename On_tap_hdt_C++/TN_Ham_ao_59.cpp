#include <iostream>
using namespace std;
class Base
{
public:
    virtual void display()
    {
        cout << "Base" << endl;
    }
    void show()
    {
        display();
    }
};
class Derive : public Base
{
public:
    void display()
    {
        cout << "Derive" << endl;
    }
};
int main()
{
    Derive d;
    d.show();
    return 0;
}