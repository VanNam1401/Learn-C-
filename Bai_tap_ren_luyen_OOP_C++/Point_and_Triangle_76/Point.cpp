#include <iostream>
#include <cmath>
#pragma once
using namespace std;

class Point
{

public:
    int x;
    int y;
    Point() {}
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    int getX()
    {
        return this->x;
    }
    int getY()
    {
        return this->y;
    }
    // nạp chồng toán tử giữa 2 Point - tính tọa độ giữa 2 điểm A & B 
    friend Point operator-(Point A, Point B)
    {
        return Point(A.x - B.x, A.y - B.y);
    }
    double distance(Point B)
    {
        // tính khoảng cách giữa Point hiện tại với Point B: sqrt((Xa-Xb)^2+(Ya-Yb)^2)
        return sqrt((this->x - B.x) * (this->x - B.x) + (this->y - B.y) * (this->y - B.y));
    }
    void display()
    {
        cout << "X = " << x << " Y = " << y << endl;
    }
};
