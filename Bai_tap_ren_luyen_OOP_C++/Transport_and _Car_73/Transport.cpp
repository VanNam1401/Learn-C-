#include <iostream>
#pragma once 
using namespace std;

class Transport 
{
    private:
    string manufacturer;
    string name;
    int year;
    int speed;
    public:
    Transport(){}
    Transport(string manufacturer, string name, int year, int speed)
    {
        this->manufacturer = manufacturer;
        this->name = name;
        this->year = year;
        this->speed = speed;
    }
    string getManufacturer()
    {
        return this->manufacturer;
    }
    string getName()
    {
        return this->name;
    }
    int getYear()
    {
        return this->year;
    }
    int getSpeed()
    {
        return this->speed;
    }
    void display()
    {
        cout << "Manufacturer: " << getManufacturer() << endl;
        cout << "Name: " << getName() << endl;
        cout << "Year Of Manufacturer: " << getYear() << endl;
        cout << "Speed: " << getSpeed() << endl;
    }
};