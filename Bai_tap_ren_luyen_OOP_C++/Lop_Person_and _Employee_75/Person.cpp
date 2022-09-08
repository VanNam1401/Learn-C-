#include <iostream>
#include <vector>
#pragma once
using namespace std;

class Person
{
private:
    string name;
    int age;
    string add;
    string tel;
    string sex;

public:
    Person() {}
    Person(string name, int age, string add, string tel, string sex)
    {
        this->name = name;
        this->age = age;
        this->add = add;
        this->tel = tel;
        this->sex = sex;
    }
    string getName()
    {
        return this->name;
    }
    string getAdd()
    {
        return this->add;
    }
    int getAge()
    {
        return this->age;
    }
    string getTel()
    {
        return this->tel;
    }
    string getSex()
    {
        return this->sex;
    }
    virtual void display()
    {
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Sex: " << getSex() << endl;
        cout << "Add: " << getAdd() << endl;
        cout << "Tel: " << getTel() << endl;
    }
    virtual long salary() = 0;
    static vector<Person *> findPerson(vector<Person *> p)
    {
        vector<Person *> v;
        for (int i = 0; i < p.size(); i++)
        {
            if(p[i]->add == "HN")
            {
                v.push_back(p[i]);
            }
        }
        return v;
    }
};
int main()
{
	vector<Person*> s;
	Person* a[5];
	a[0] = new EmployeeFT("a", 18, "HN", "09842", "nam", 30, 309200);
	a[1] = new EmployeePT("b", 18, "HN", "09842", "nam", 7, 30000);
	a[2] = new EmployeeFT("c", 18, "HN", "09842", "nam", 30, 1200);
	a[3] = new EmployeePT("d", 18, "HB", "09842", "nam", 6, 1200);
	a[4] = new EmployeeFT("e", 18, "NB", "09842", "nam", 30, 130200);
	s.push_back(a[0]);
	s.push_back(a[1]);
	s.push_back(a[2]);
	s.push_back(a[3]);
	s.push_back(a[4]);
	vector<Person*> per(Person::findPerson(s));
}
