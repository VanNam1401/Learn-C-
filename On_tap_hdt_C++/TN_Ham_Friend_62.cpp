#include <bits/stdc++.h>
using namespace std;

class A
{
private:
    int a = 10;

public:
    friend void print(A x);
};
void print(A x)
{
    cout << x.a;
}

int main()
{
    A x;
    print(x);
    return 0;
}