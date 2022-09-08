#include "Employee.cpp"
using namespace std;

class PartTimeEmployee : public Employee
{
private:
    int workingHours;

public:
    PartTimeEmployee(string name, int paymentPerHour, double workingHours) : Employee(name, paymentPerHour)
    {
        this->workingHours = workingHours;
    }
    double getWorkingHours()
    {
        return workingHours;
    }
    int calculateSalary()
    {
        return getWorkingHours() * getPaymentPerHour();
    }
};