#include <vector>
#include <algorithm>
#include "Book.cpp"
#pragma once
class Person
{
    string name;     // tên
    int age;         // tuổi
    string add;      // địa chỉ
    vector<Book> vb; // danh sách các cuốn sách mượn của độc giả
public:
    Person() {}
    Person(string name, int age, string add, vector<Book> vb) : name(name), age(age), add(add), vb(vb) {}
    string getName()
    {
        return this->name;
    }
    int getAge()
    {
        return this->age;
    }
    string getAdd()
    {
        return this->add;
    }
    vector<Book> getVB()
    {
        return this->vb;
    }
    // tính toán số tiền phải trả của độc giả
    virtual long moneyPay() = 0;
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Add: " << add << endl;
        cout << "List Book Borrowed:" << endl;
        for (int i = 0; i < vb.size(); i++)
        {
            vb[i].display();
        }
        cout << "Money Pay: " << moneyPay() << endl;
    }

    // phương thức tĩnh sắp xếp các độc giả theo thứ tự tăng dần của tuổi
    static void sortPersonAge(vector<Person *> vt)
    {

        for (int i = 0; i < vt.size() - 1; i++)
        {
            for (int j = i + 1; j < vt.size(); j++)
            {
                if (vt[i]->getAge() > vt[j]->getAge())
                {
                    swap(vt[i], vt[j]);
                }
            }
            
    }
    // phương thức tĩnh trả về vector chứa độ tuổi không lặp lại của độc giả.
    static vector<int> getListAge(vector<Person *> vt)
    {
        vector<int> str;
        for (int i = 0; i < vt.size(); i++)
        {
            if ((find(str.begin(), str.end(), vt[i]->getAge()) == str.end()))
            {
                str.push_back(vt[i]->getAge());
            }
        }
        return str;
    }
    // danh sách các cuốn sách được mượn nhiều nhất.
    static vector<Book> getMaxBookBorrowed(vector<Person*> vp, vector<Book> vB)
    {
        vector<int> count(vB.size(), 0);
        for (int i = 0; i < vB.size(); i++)
        {
            for (int j = 0; j < vp.size(); j++)
            {
                vector<Book> b(vp[j]->getVB());
                for (int k = 0; k < b.size(); k++)
                {
                    if (vB[i].getNameBook() == b[k].getNameBook())
                    {
                        count[i]++;
                    }
                }
            }
        }
        int max = *max_element(count.begin(), count.end());
        vector<Book> res;
        for (int i = 0; i < vB.size(); i++)
        {
            if (count[i] == max)
            {
                res.push_back(vB[i]);
            }
        }
        return res;
    }
};