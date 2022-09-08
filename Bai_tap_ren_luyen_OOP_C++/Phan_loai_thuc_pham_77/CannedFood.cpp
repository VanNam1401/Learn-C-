#include "Food.cpp"
#include <vector>
using namespace std;

class CannedFood : public Food
{
    // thuộc tính chỉ số lượng hộp
    int numberBox;

public:
    CannedFood() {}
    CannedFood(string name, double price, int numberBox) : Food(name, price), numberBox(numberBox) {}
    void display()
    {
        cout << "Name: " << getName() << endl;
        cout << "Price: " << getPrice() << endl;
        cout << "Number box: " << getNumberBox() << endl;
    }
    void sortNumberBox(int numberBox)
    {
        this->numberBox = numberBox;
    }
    int getNumberBox()
    {
        return numberBox;
    }
    // phương thức sắp xếp theo thứ tự tăng dần của numberBox
    static void sortNumberBox(vector<CannedFood> &vt)
    {
        for (int i = 0; i < vt.size() - 1; i++)
        {
            for (int j = i + 1; j < vt.size(); j++)
            {
                if (vt[i].getNumberBox() > vt[j].getNumberBox())
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
