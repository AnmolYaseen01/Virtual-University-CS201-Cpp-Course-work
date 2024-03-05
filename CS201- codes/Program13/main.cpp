#include <iostream>
using namespace std;
int main()
{
    int salary;
    float deduction;
    float netPayable;

    cout<<"Please enter your salary: ";
    cin>>salary;

    switch(salary/10000)
    {
        case 0:
        deduction=0;
        netPayable=salary;
        cout<<"Net Payable (salary-deduction)="<<salary<<"-"<<deduction<<"="<<salary;
        break;
        case 1:
        deduction=1000;
        netPayable=salary-deduction;
        cout<<"Net Payable (salary-deduction)="<<salary<<"-"<<deduction<<"="<<salary;
        break;
        default:
        deduction=salary*7/100;
        netPayable=salary-deduction;
        cout<<"Net Payable (salary-deduction)="<<salary<<"-"<<deduction<<"="<<salary;
    }
}
