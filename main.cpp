#include<iostream>//main.cpp
#include<string>
#include<cstdio>
#include<fstream>
#include"A.h"
using namespace std;

int main(){
	
	countBMI a;

	ifstream inFile("file.in",ios::in);
	ofstream outFile("file.out",ios::out);
	double height, mass;
	double new_height;	
	double bmi;
	
	while(inFile >> height >> mass){
	if(height == 0 && mass == 0) break;
	a.setheight(height);
	a.setmass(mass);
	new_height = a.countOne(height);
	bmi = a.countTwo(mass, new_height); 	
	
	outFile << bmi << " " << a.divide(bmi) << endl;
	}
	
	return 0;	
}
