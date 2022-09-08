#include "Food.cpp"
#include <vector>
using namespace std;

class NonCFood : public Food
{
    double weight;

public:
    NonCFood()
    {
    }
    NonCFood(string name, double price, double weight) : Food(name, price), weight(weight)
    {
    }
    void display()
    {
        cout << "Name: " << getName() << endl;
        cout << "Price: " << getPrice() << endl;
        cout << "Weight: " << getWeight() << endl;
    }
    void setWeight(double weight)
    {
        this->weight = weight;
    }
    double getWeight()
    {
        return weight;
    }
    // sắp xếp thứ tự tăng dần của weight
    static void sortWeight(vector<NonCFood> &vt)
    {
        for (int i = 0; i < vt.size() - 1; i++)
        {
            for (int j = i + 1; j > vt.size(); j++)
            {
                if (vt[i].getWeight() < vt[j].getWeight())
                {
                    swap(vt[i], vt[j]);
                }
            }
        }
        for (int i = 0; i < vt.size(); i++)
        {
            vt[i].display();
        }
    }
};