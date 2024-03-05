#include <iostream>
using namespace std;
main()
{
int sum,number,upperLimit;
sum=0;
number=1;
cout<<"PLease enter the upper limit for which you want the sum: ";
cin>>upperLimit;

while(number<=upperLimit)
{
    if((number%2)==0)
    {
        sum=sum+number;
    }
    number=number+1;
    cout<<"Thge sum of the even numbers of the first "<<upperLimit<< "integers starting form 1 is: "<<sum;
}
}
