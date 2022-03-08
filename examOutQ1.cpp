#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

double BMI(double weight, double tall)
{
	return weight/(tall*tall);
}
string BMIStatus(double bmi)
{
	if(bmi < 18.5)
		return "tooLight";
	else if(bmi >= 18.5 && bmi < 24)
		return "normal";
	else
		return "tooHeavy";
	
}

int main()
{
	double weight,tall;
	char name[100]={};
	
	cin>>name>>weight>>tall;
	cout<<name<<" "<<setprecision(2)<<fixed<<BMI(weight,tall) << " " << BMIStatus(BMI(weight,tall));	
}
