#pragma once
#include <iostream>
using namespace std;

class Subject
{
    private:
    string nameSub;
    double point;
    int numberCredit;
    long money;
    public:
    Subject(){}
    Subject(string nameSub, double point, int numberCredit, long money)
    {
        this->nameSub = nameSub;
        this->point = point;
        this->numberCredit = numberCredit;
        this->money = money;
    }
    string getNameSub()
    {
        return this->nameSub;
    }
    double getPoint()
    {
        return this->point;
    }
    int getNumberCredit()
    {
        return this->numberCredit;
    }
    long getMoney()
    {
        return this->money;
    }
    void display()
    {
        cout << "Name Subject: " << getNameSub() << endl;
       // cout << "Point: " << getPoint() << endl;
        cout << "Number Credit: " << getNumberCredit() << endl;
        cout << "Money of One Credit: " << getMoney() << endl;
    }
};
