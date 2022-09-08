#include <iostream>
#include <vector>
using namespace std;

class Student
{
private:
    string name;
    double math;
    double physic;
    double chemistry;

public:
    Student() {}
    Student(string name, double math, double physic, double chemistry)
    {
        this->name = name;
        this->math = math;
        this->physic = physic;
        this->chemistry = chemistry;
    }
    double getMath()
    {
        return this->math;
    }
    double getPhysic()
    {
        return this->physic;
    }
    double getChemistry()
    {
        return this->chemistry;
    }
    void display()
    {
        cout << "Name: " << this->name << endl;
        cout << "Point math: " << getMath() << endl;
        cout << "Point physic: " << getPhysic() << endl;
        cout << "Point chemistry: " << getChemistry() << endl;
        cout << "Average: " << avgPoint() << endl;
    }
    double avgPoint()
    {
        return (math + physic + chemistry) / 3;
    }
    static vector<Student> getStudentMaxAvg(vector<Student> vt)
    {
        double max = vt[0].avgPoint();
        vector<Student> v;
        for (int i = 1; i < vt.size(); i++)
        {
            if (vt[i].avgPoint() > max)
            {
                max = vt[i].avgPoint();
            }
        }
        for (int i = 1; i < vt.size(); i++)
        {
            if (vt[i].avgPoint() == max)
            {
                v.push_back(vt[i]);
            }
        }
        return v;
    }
    static vector<Student> getStudentMaxMath(vector<Student> vt)
    {
        double max = vt[0].getMath();
        vector<Student> v;
        for (int i = 0; i < vt.size(); i++)
        {
            if (vt[i].getMath() > max)
            {
                max = vt[i].getMath();
            }
        }
        for (int i = 1; i < vt.size(); i++)
        {
            if (vt[i].getMath() == max)
            {
                v.push_back(vt[i]);
            }
        }
        return v;
    }
    static vector<Student> getStudentMaxPhysic(vector<Student> vt)
    {
        double max = vt[0].getPhysic();
        vector<Student> v;
        for (int i = 1; i < vt.size(); i++)
        {
            if (vt[i].getPhysic() > max)
            {
                max = vt[i].getPhysic();
            }
        }
        for (int i = 1; i < vt.size(); i++)
        {
            if (vt[i].getPhysic() == max)
            {
                v.push_back(vt[i]);
            }
        }
        return v;
    }
    static vector<Student> getStudentMaxChemistry(vector<Student> vt)
    {
        double max = vt[0].getChemistry();
        vector<Student> v;
        for (int i = 1; i < vt.size(); i++)
        {
            if (vt[i].getChemistry() > max)
            {
                max = vt[i].getChemistry();
            }
        }
        for (int i = 1; i < vt.size(); i++)
        {
            if (vt[i].getChemistry() == max)
            {
                v.push_back(vt[i]);
            }
        }
        return v;
    }
};
int main()
{
    // Student ss;
    vector<Student> vt1;

    vt1.push_back(Student("Mr.The", 3, 4, 5));
    vt1.push_back(Student("Mr.End", 6, 7, 8));

    vector<Student> vt2 = Student::getStudentMaxAvg(vt1); 
    // gọi hàm getStudentMaxAvg() của vector vt1 và gán cho vector vt2

    /*for(int i=0;i<Student::getStudentMaxAvg(vt1).size();i++)
    {
        Student::getStudentMaxAvg(vt1)[i].display(); // cách viết này gọi hàm nhiều lần mỗi vòng lặp
                                                     // làm chậm chương trình, hạn chế dùng
    }*/

    for (int i = 0; i < vt2.size(); i++)
    {
        vt2[i].display();
    }

    cout << endl;
    return 0;
}