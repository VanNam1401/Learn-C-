#include "CannedFood.cpp"
#include "NonCFood.cpp"
//#include "Food.cpp"
int main()
{
    vector<CannedFood> cf;

    cf.push_back(CannedFood("Fish", 500, 3));
    cf.push_back(CannedFood("Meat", 700, 2));
    cf.push_back(CannedFood("Egg", 600, 1));

    CannedFood::sortNumberBox(cf);

    cout << endl;

    vector<NonCFood> ncf;

    ncf.push_back(NonCFood("Beef", 500, 60));
    ncf.push_back(NonCFood("Chicken", 500, 40));
    ncf.push_back(NonCFood("Pig", 500, 20));

    NonCFood::sortWeight(ncf);
}