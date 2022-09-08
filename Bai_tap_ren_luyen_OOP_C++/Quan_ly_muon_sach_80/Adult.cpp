#include "Person.cpp"
using namespace std;

class Adult : public Person
{
    public:
    Adult() {}
    Adult(string name, int age, string add, vector<Book> vb) : Person(name, age, add, vb) {}
    long moneyPay()
    {
        return this->getVB().size() * 5000;
    }
    void display()
    {
        cout << "Adult!" << endl;
        Person::display();
    }
};