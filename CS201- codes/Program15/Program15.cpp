#include <iostream>
using namespace std;
double circleArea(double);

int main(){
	double rad1;
	double rad2;
	double ringArea;
	
	cout<<"please enter the outer radius value: ";
	cin>>rad1;
	cout<<"please enter th3e radius of the inner circle:";
	cin>>rad2;
	ringArea=circleArea(rad1)-circleArea(rad2);
	cout<<"Area of the having inner radius "<<rad2<<"and the outer radius "<<rad1<<"is"<<ringArea;
	
}

double circleArea(double radius)
{
	return(3.1415926*radius*radius);
}
