#include <iostream>
using namespace std;
main()
{
int payable_amount;
int total_bill;

cout<<"Enter the total amount of the bill: ";
cin>>total_bill;
if(total_bill>5000)
{
payable_amount=total_bill*15.0/100;
cout<<"Total discount: 15%";
cout<<"Amount paybale: "<<payable_amount;

}
else
{
payable_amount=total_bill*10.0/100;
cout<<"Total discount: 10%";
cout<<"Amount paybale: "<<payable_amount;
}

}
