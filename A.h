//A.h
#include<string>
using namespace std;

class countBMI {
	public:
		void setheight(double);
		void setmass(double);
		double countOne(double);
		double countTwo(double, double);
		string divide(double);
	private:
		double height;
		double mass;
};


