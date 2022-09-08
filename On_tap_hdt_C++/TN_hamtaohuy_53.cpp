#include <iostream>
using namespace std;

class A
{
    public:
    A()
    {
        cout << "Costructor" << endl;
    }
    ~A()
    {
        cout << "Destructor" << endl;
    }
};
A a;
int main()
{
    cout << "Hello world" << endl;
    return 0;
}
//giải thích:
// do A a ở đây là biến toàn cục nên lúc này hàm tạo được thực hiện -> lệnh cout trong hàm main().