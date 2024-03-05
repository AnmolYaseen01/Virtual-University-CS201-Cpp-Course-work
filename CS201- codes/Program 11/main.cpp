#include <iostream>
using namespace std;
int main()
{
	int number,maxmult,table;
	
	cout<<"Please Enter a number for which you want a table: "<<endl;
	cin>>table;
	cout<<"please enter a multipplier up to which you want a table"<<endl;
	cin>>maxmult;
	cout<<"-------Table of "<<table<<"--------"<<endl;
    for (number=0; number<=maxmult ; number=number+1)
    {
        
        cout<<table<<"x"<<number<<"="<<table*number<<endl;
    }
    
}
