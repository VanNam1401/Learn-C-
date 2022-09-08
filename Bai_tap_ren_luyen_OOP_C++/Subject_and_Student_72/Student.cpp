#include "Subject.cpp"
#include <vector>
using namespace std;

class Student
{
private:
    string id;
    string name;
    vector<Subject> s;

public:
    Student() {}
    Student(string id, string name, vector<Subject> s)
    {
        this->id = id;
        this->name = name;
        this->s = s;
    }
    string getId()
    {
        return this->id;
    }
    string getName()
    {
        return this->name;
    }
    vector<Subject> getS()
    {
        return this->s;
    }
    long getSumMoney()
    {
        long sum = 0;
        for (int i = 0; i < s.size(); i++)
        {
            sum += s[i].getNumberCredit() * s[i].getMoney();
        }
        return sum;
    }
    double avgPoint()
    {
        double point = 0;
        int sum = 0;
        for (int i = 0; i < s.size(); i++)
        {
            point += s[i].getNumberCredit() * s[i].getPoint();
            sum += s[i].getNumberCredit();
        }
        return point / sum;
    }
    void display()
    {
        cout << "Id: " << getId() << endl;
        cout << "Name Student: " << getName() << endl;
        cout << "List Subject " << endl;
        for (int i = 0; i < s.size(); i++)
        {
            s[i].display();
        }
        cout << "Sum Money Have To Pay: " << getSumMoney() << endl;
        cout << "Average Point: " << avgPoint() << endl;
    }
};
int main()
{
    vector<Subject> v;
    v.push_back(Subject("Hoang Anh Tien", 2, 5, 30));
    v.push_back(Subject("Tien Anh Hoang", 4, 1, 14));
    v.push_back(Subject("Tien Ngu 2", 12, 4, 2003));

    vector<Student> s;
    s.push_back(Student("72DCHT21", "Tien Ngu 1", v));

    for (int i = 0; i < v.size(); i++)
    {
        s[i].display();
    }

    return 0;
}