#include "A.h"
#include<string>//A.cpp
using namespace std;

void countBMI::setheight(double i){
			height = i;
		}
void countBMI::setmass(double j){
			mass = j;
		}
double countBMI::countOne(double height){
			double new_height;
			new_height = height/100*height/100;
			return new_height;
		};
double countBMI::countTwo(double mass, double new_height){
			double BMI;
			BMI = mass / new_height;
			return BMI; 
		};
string countBMI::divide(double BMI){
			if(BMI < 15.0){
				return "Very severely underweight";
			}
			else if(BMI < 16.0){
				return "Severely underweight";
			}
			else if(BMI < 18.5){
				return "Underweight";
			}
			else if(BMI < 25){
				return "Normal";
			}
			else if(BMI < 30){
				return "Overweight";
			}
			else if(BMI < 35.0){
				return "Obese Class 1";
			}
			else if(BMI < 40.0){
				return "Obese Class 2";
			}
			else{
				return "Obese Class 3";
			}
		};



