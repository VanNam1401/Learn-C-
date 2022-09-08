#include <iostream>
#pragma once
#include <vector>
using namespace std;

class People
{
    string name; //tên
    int age; //tuổi
    string job;//nghề nghiệp
    string id; // mã định danh của mỗi người
    public:
    People(){}
    People(string name, string job, string id, int age) : name(name), age(age), job(job), id(id){}
    string getName()
    {
        return this->name;
    }
    int getAge()
    {
        return this->age;
    }
    string getJob()
    {
        return this->job;
    }
    string getId()
    {
        return this->id;
    }
    void display()
    {
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Job: " << getJob() << endl;
        cout << "Id: " << getId() << endl;
    }
};