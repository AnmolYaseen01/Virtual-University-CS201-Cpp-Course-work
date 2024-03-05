#include <iostream>
using namespace std;
int main()
{
    int number;
    int digit;

    cout<<"enter the number:";
    cin>>number;
    digit=number%10;
    number=number/10;
    cout<<digit<<",";
    
    digit=number%10;
    number=number/10;
    cout<<digit<<",";

    digit=number%10;
    number=number/10;
    cout<<digit<<",";

    digit=number%10;
    number=number/10;
    cout<<digit<<",";

}
