#include "Person.cpp"
using namespace std;

class Customer : public Person
{
private:
    int balance;

public:
    Customer(string name, string address, int balance) : Person (name, address)
    {
        this->balance = balance;
    }
    int getBalance()
    {
        return balance;
    }
    void display()
    {
        cout << "Customer name: " << getName() << endl;
        cout << "Customer address: " << getAddress() << endl;
        cout << "Customer balance: " << getBalance() << endl;
    }
};