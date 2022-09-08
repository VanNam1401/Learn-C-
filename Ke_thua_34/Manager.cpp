#include "Employee.cpp"

using namespace std;

class Manager : public Employee
{
private:
    int bonus;

public:
    Manager(string name, int salary, int bonus) : Employee(name, salary)
    {
        this->bonus = bonus;
    }
    void setBonus(int bonus)
    {
        this->bonus = bonus;
    }
    int getBonus()
    {
        return bonus;
    }
    int getSalary()
    {
        return Employee::getSalary() + getBonus();
    }
    void display()
    {
        cout << "Name: " << getName() << endl;
        cout << "Salary: " << getSalary() << endl;
    }
};
int main()
{
    Employee s("Khanh", 1500);
    s.display();
    Manager t("Binh", 2500, 1600);
    t.display();
}