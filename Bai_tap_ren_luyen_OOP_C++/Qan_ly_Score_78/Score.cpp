#include <iostream>
#include <vector>
#pragma once
using namespace std;

class Score
{
protected:
    double math;
    double literature;
    double english;

public:
    Score() {}
    Score(double math, double literature, double english) : math(math), literature(literature), english(english) {}
    double getMath()
    {
        return this->math;
    }
    double getLiterature()
    {
        return this->literature;
    }
    double getEnglish()
    {
        return this->english;
    }
    virtual double PointA()
    {
        return 0;
    }
    virtual double PointB()
    {
        return 0;
    }
    virtual double PointC()
    {
        return 0;
    }
    virtual double PointD()
    {
        return getMath() + getLiterature() + getEnglish();
    }
    virtual double avgPoint() = 0; // trả về điểm trug bình của cả kì thi, gồm các môn chính và tổ hợp kèm theo.
    static double getMaxAvg(vector<Score *> vt)
    {
        double max = vt[0]->avgPoint();
        for (int i = 1; i < vt.size(); i++)
        {
            if (vt[i]->avgPoint() > max)
            {
                max = vt[i]->avgPoint();
            }
        }
        return max;
    }
    static double getMinAvg(vector<Score *> vt)
    {
        double min = vt[0]->avgPoint();
        for (int i = 1; i < vt.size(); i++)
        {
            if (vt[i]->avgPoint() < min)
            {
                min = vt[i]->avgPoint();
            }
        }
        return min;
    }
    bool isPass()
    {
        if (avgPoint() > 5)
        {
            return true;
        }
        return false;
    }
    static double getMaxPointA(vector<Score *> vt)
    {
        double maxA = vt[0]->PointA();
        for (int i = 1; i < vt.size(); i++)
        {
            if (vt[i]->PointA() > maxA)
            {
                maxA = vt[i]->PointA();
            }
        }
        return maxA;
    }
    static double getMaxPointB(vector<Score *> vt)
    {
        double maxB = vt[0]->PointB();
        for (int i = 1; i < vt.size(); i++)
        {
            if (vt[i]->PointB() > maxB)
            {
                maxB = vt[i]->PointB();
            }
        }
        return maxB;
    }
    static double getMaxPointC(vector<Score *> vt)
    {
        double maxC = vt[0]->PointC();
        for (int i = 1; i < vt.size(); i++)
        {
            if (vt[i]->PointC() > maxC)
            {
                maxC = vt[i]->PointC();
            }
        }
        return maxC;
    }
    static double getMaxPointD(vector<Score *> vt)
    {
        double maxD = vt[0]->PointD();
        for (int i = 1; i < vt.size(); i++)
        {
            if (vt[i]->PointD() > maxD)
            {
                maxD = vt[i]->PointD();
            }
        }
        return maxD;
    }
};