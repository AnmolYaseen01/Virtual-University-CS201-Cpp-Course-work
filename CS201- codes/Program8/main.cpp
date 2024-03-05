#include <iostream>
#include <iostream>
using namespace std;
int main()
{
    int tryNum=0;
    char c;
    
    do
    {
        cout<<"Please enter a character betweeen a-z for guessing: ";
        cin>>c;

if (c=='z')
    {
    cout<<"Congratulations, you guess is correct!";
        
    }
else
    {
    tryNum=tryNum+1;
    }
    }
    while(tryNum <=5 && c!='z');
}
