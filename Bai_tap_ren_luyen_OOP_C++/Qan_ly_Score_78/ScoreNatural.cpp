#include "Score.cpp"

class ScoreNatural : public Score
{
    double physic;
    double chemistry;
    double biology;
    public:
    ScoreNatural(){}
    ScoreNatural(double math, double literature, double english, double physic, double chemistry, double biology) : Score(math, literature, english), physic(physic), chemistry(chemistry), biology(biology) {}
    double getPhysic()
    {
        return this->physic;
    }
    double getChemistry()
    {
        return this->chemistry;
    }
    double getBiology()
    {
        return this->biology;
    }
    double PointA()
    {
        return getMath() + getPhysic() + getChemistry();
    }
    double PointB()
    {
        return getMath() + getChemistry() + getBiology();
    }
    double PointNatural()
    {
        return getChemistry() + getPhysic() + getBiology();
    }
    double avgPoint()
    {
        return (getMath() + getPhysic() + getChemistry() + getBiology() + getEnglish() + getLiterature()) / 6;
    }
};