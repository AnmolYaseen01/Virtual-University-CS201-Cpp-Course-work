#include <iostream>
using namespace std;
main()
{
int factorial,number;
factorial=1;
number=1;

cout<<"Enter the number: ";
cin>>number;

while (number>=1)
{    
factorial=number*factorial;
number=number-1;
}
cout<<"The factorial of "<<number<<" is:"<<factorial;
}
