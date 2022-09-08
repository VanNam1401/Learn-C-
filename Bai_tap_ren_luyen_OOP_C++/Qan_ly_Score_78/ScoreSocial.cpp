#include "Score.cpp"
using namespace std;

class ScoreSocial : public Score
{
    double ce;        // công dân
    double geography; // địa
    double history;   // lịch sử
public:
    ScoreSocial() {}
    ScoreSocial(double math, double literature, double english, double ce, double geography, double history) : Score(math, literature, english), ce(ce), geography(geography), history(history) {}
    double getCe()
    {
        return this->ce;
    }
    double getGeography()
    {
        return this->geography;
    }
    double getHistory()
    {
        return this->history;
    }
    double PointC()
    {
        return getLiterature() + getHistory() + getGeography();
    }
    double PointNatural()
    {
        return getCe() + getHistory() + getGeography();
    }
    double avgPoint()
    {
        return (getMath() + getLiterature() + getEnglish() + getCe() + getHistory() + getGeography())/ 6;
    }
};