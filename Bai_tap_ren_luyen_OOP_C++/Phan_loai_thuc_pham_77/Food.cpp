#include <iostream>
#pragma once
using namespace std;

class Food
{
    string name; //tên sp
    double price; // giá thực phẩm

public:
    Food() {}
    Food(string name, double price) : name(name), price(price) {}
    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return name;
    }
    void setPrice(double price)
    {
        this->price = price;
    }
    double getPrice()
    {
        return price;
    }
};