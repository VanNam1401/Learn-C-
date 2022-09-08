#include "Transport.cpp"
#include <vector>
using namespace std;
#define pub push_back
class Car : public Transport
{
private:
    int numberSeat;
    string engineType;

public:
    Car() {}
    Car(string manufacturer, string name, int year, int speed, int numberSeat, string engineType) : Transport(manufacturer, name, year, speed)
    {
        this->numberSeat = numberSeat;
        this->engineType = engineType;
    }
    int getNumberSeat()
    {
        return this->numberSeat;
    }
    string getEngineType()
    {
        return this->engineType;
    }
    double getSpeedBasic()
    {
        return Transport::getSpeed() / getNumberSeat();
    }
    void display()
    {
        Transport::display();
        cout << "Number Seat: " << getNumberSeat() << endl;
        cout << "Engine Type: " << getEngineType() << endl;
        cout << "Speed Basic: " << getSpeedBasic() << endl;
    }
    static vector<Car> getCarHaveMaxSpeedBasic(vector<Car> vt)
    {
        double MaxSpeedBasic = vt[0].getSpeedBasic();
        vector<Car> v;
        for (int i = 0; i < vt.size(); i++)
        {
            if (vt[i].getSpeedBasic() > MaxSpeedBasic)
            {
                MaxSpeedBasic = vt[i].getSpeedBasic();
            }
        }
        for (int i = 0; i < vt.size(); i++)
        {
            if (vt[i].getSpeedBasic() == MaxSpeedBasic)
            {
                v.pub(vt[i]);
            }
        }
        return v;
    }
    static vector<Car> getCarHaveMaxSeat(vector<Car> vt)
    {
        int MaxSeat = vt[0].getNumberSeat();
        vector<Car> v;
        for (int i = 0; i < vt.size(); i++)
        {
            if (vt[i].getNumberSeat() > MaxSeat)
            {
                MaxSeat = vt[i].getNumberSeat();
            }
        }
        for (int i = 0; i < vt.size(); i++)
        {
            if (vt[i].getNumberSeat() == MaxSeat)
            {
                v.pub(vt[i]);
            }
        }
        return v;
    }
};
int main()
{
    Transport t("Ford", "Car", 2020, 400);
    t.display();
    cout << endl;

    Car r("Viet Nam", "VinFast", 2021, 300, 3, "diesel");
    r.display();
    cout << endl;

    vector<Car> v;
    v.push_back(Car("Viet Nam", "VinFast2", 2021, 300, 4, "diesel"));
    v.push_back(Car("Viet Nam", "VinFast3", 2021, 300, 5, "diesel"));
    v.push_back(Car("Viet Nam", "VinFast4", 2021, 300, 4, "diesel"));

    for (int i = 0; i < Car::getCarHaveMaxSpeedBasic(v).size(); i++)
    {
        Car::getCarHaveMaxSpeedBasic(v)[i].display();
        cout << endl;
    }

    for (int i = 0; i < Car::getCarHaveMaxSeat(v).size(); i++)
    {
        Car::getCarHaveMaxSeat(v)[i].display();
        cout << endl;
    }
}