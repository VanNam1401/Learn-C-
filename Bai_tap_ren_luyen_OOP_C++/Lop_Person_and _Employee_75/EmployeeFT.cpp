#include "Person.cpp"
#define pub push_back
using namespace std;

class EmployeeFT : public Person
{
    int day;
    long money;

public:
    EmployeeFT() {}
    EmployeeFT(string name, int age, string add, string tel, string sex, int day, long money) : Person(name, age, add, tel, sex)
    {
        this->day = day;
        this->money = money;
    }
    int getDay()
    {
        return this->day;
    }
    long getMoney()
    {
        return this->money;
    }
    void display()
    {
        cout << "Employee Full Time" << endl;
        Person::display();
        cout << "Day: " << getDay() << endl;
        cout << "Money: " << getMoney() << endl;
        cout << "Salary: " << salary() << endl;
    }
    long salary()
    {
        return long(day) * money;
    }
    static vector<EmployeeFT> getMaxSalary(vector<EmployeeFT> ft)
    {
        long max = ft[0].salary();
        for (int i = 1; i < ft.size(); i++)
        {
            if (ft[i].salary() > max)
            {
                max = ft[i].salary();
            }
        }
        vector<EmployeeFT> v;
        for (int i = 0; i < ft.size(); i++)
        {
            if (ft[i].salary() == max)
            {
                v.pub(ft[i]);
            }
        }
        return v;
    }
};
int main()
{
	vector<EmployeeFT> ft;
	ft.pub(EmployeeFT("a", 18, "HN", "09842", "nam", 10, 309200));
	ft.pub(EmployeeFT("b", 18, "HN", "09842", "nam", 30, 309200));
	ft.pub(EmployeeFT("c", 18, "HN", "09842", "nam", 30, 309200));
	ft.pub(EmployeeFT("d", 18, "HN", "09842", "nam", 15, 309200));
	ft.pub(EmployeeFT("e", 18, "HN", "09842", "nam", 30, 309200));
	vector<EmployeeFT> f(EmployeeFT::getMaxSalary(ft));
}