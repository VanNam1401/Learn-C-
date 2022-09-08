#include "Person.cpp"
using namespace std;

class EmployeePT : public Person
{
    int hour;   // so gio lam viec
    long money; // so tien luong/gio
public:
    EmployeePT() {}
    EmployeePT(string name, int age, string add, string tel, string sex, int hour, long money) : Person(name, age, add, tel, sex)
    {
        this->hour = hour;
        this->money = money;
    }
    int getHour()
    {
        return this->hour;
    }
    long getMoney()
    {
        return this->money;
    }
    long salary()
    {
        return long(hour) * money;
    }
    void display()
    {
        cout << "Employee Part Time" << endl;
        Person::display();
        cout << "Hour: " << getHour() << endl;
        cout << "Money: " << getMoney() << endl;
        cout << "Salary: " << salary() << endl;
    }
    static vector<EmployeePT> getMaxSalary(vector<EmployeePT> pt)
    {
        long max = pt[0].salary();
        for (int i = 1; i < pt.size(); i++)
        {
            if (pt[i].salary() > max)
            {
                max = pt[i].salary();
            }
        }
        vector<EmployeePT> v;
        for (int i = 0; i < pt.size(); i++)
        {
            if (pt[i].salary() == max)
            {
                v.push_back(pt[i]);
            }
        }
        return v;
    }
};
int main()
{
    vector<EmployeePT> e;
    e.push_back(EmployeePT("a", 18, "HN", "09842", "nam", 7, 30000));
    e.push_back(EmployeePT("b", 18, "HN", "09842", "nam", 7, 40000));
    e.push_back(EmployeePT("c", 18, "HN", "09842", "nam", 7, 50000));
    e.push_back(EmployeePT("d", 18, "HN", "09842", "nam", 7, 60000));
    e.push_back(EmployeePT("e", 18, "HN", "09842", "nam", 7, 50000));
    e.push_back(EmployeePT("f", 18, "HN", "09842", "nam", 7, 60000));
    vector<EmployeePT> pt(EmployeePT::getMaxSalary(e));
}