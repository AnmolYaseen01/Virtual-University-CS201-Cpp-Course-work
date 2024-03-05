#include <iostream>

using namespace std;

int main()
 {
	int sum,integer,number;
	sum=0;
	cout<<"please enter a positive number for sum of squares: ";
	cin>>integer;
	for(number=0 ; number<=integer; number++)
	{
		sum=sum+number*number;
		}
	
	cout<<"Sum of the  squares of the first "<< number <<" positive integers is: "<<sum<<endl;
}
