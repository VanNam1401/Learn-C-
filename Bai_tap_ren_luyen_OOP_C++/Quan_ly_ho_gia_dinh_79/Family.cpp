#pragma once
#include "People.cpp"
using namespace std;

class Family
{
private:
    string nameF;     // tên chủ hộ
    string status;    // thực trạng
    string add;       //địa chỉ
    vector<People> p; // danh sách các thành viên của hộ gia đình
public:
    Family()
    {
        nameF = p[0].getName();
    }
    Family(string nameF, string status, string add, vector<People> p)
    {
        this->nameF = nameF;
        this->status = status;
        this->add = add;
        this->p = p;
    }
    string getNameF()
    {
        return this->nameF;
    }
    string getStatus()
    {
        return this->status;
    }
    string getAdd()
    {
        return this->add;
    }
    vector<People> getP()
    {
        return this->p;
    }
    void display()
    {
        cout << "householder's name: " << getNameF() << endl;
        cout << "Number Member: " << p.size() << endl;
        cout << "Address: " << getAdd() << endl;
        cout << "Status: " << getStatus() << endl;
        cout << "List Information Member" << endl;
        for (int i = 0; i < p.size(); i++)
        {
            p[i].display();
        }
    }
    static vector<Family> getPoorHousehold(vector<Family> fa)
    {
        vector<Family> v;
        for (int i = 0; i < fa.size(); i++)
        {
            if (fa[i].getStatus() == "poor")
            {
                v.push_back(fa[i]);
            }
        }
        return v;
    }
    static vector<Family> findFamilySurename(vector<Family> fa, string surename)
    {
        vector<Family> v;
        for (int i = 0; i < fa.size(); i++)
        {
            if (fa[i].getNameF() == surename)
            {
                v.push_back(fa[i]);
            }
        }
        return v;
    }
};