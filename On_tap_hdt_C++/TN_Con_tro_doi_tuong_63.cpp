#include <iostream>
using namespace std;

class A 
{

};
class B :public A
{

};
int main()
{
    A *b = new B();
    return 0;
}