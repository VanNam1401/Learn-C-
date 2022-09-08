#include "Family.cpp"
#include "People.cpp"

using namespace std;

class Group
{
    string nameGr; //tên phường
    vector<Family> f; // danh sách các hộ gia đình

public:
    Group() {}
    Group(string nameGr, vector<Family> f)
    {
        this->nameGr = nameGr;
        this->f = f;
    }
    string getNameGr()
    {
        return this->nameGr;
    }
    vector<Family> getF()
    {
        return this->f;
    }
    int getNumberFamily()
    {
        return f.size();
    }
    // độ tuổi trung bình của group
    static double avgAgeGroup(Group v)
    {
        vector<Family> F(v.getF());
		double sum = 0;
		int n = 0;
		for (int i = 0; i < F.size(); i++)
		{
			vector<People> P(F[i].getP());
			for (int j = 0; j < P.size(); j++)
			{
				sum += P[j].getAge();
			}
			n += P.size();
		}
		return sum / n;
    }
    // dánh sách những người ko có công ăn việc làm: Job = ""
    static vector<People> getPeopleHaveNotJob(Group g)
    {
        vector<People> v;
		vector<Family> F(g.getF());
		for (int i = 0; i < F.size(); i++)
		{
			vector<People> P(F[i].getP());
			for (int j = 0; j < P.size(); j++)
			{
				if (P[j].getJob() == "")
				{
					v.push_back(P[j]);
				}
			}
		}
		return v;
    }
};