//write a program that takes radius of a circle from the user and calculates the diameter,circumference and area of the circle and display the result.

#include <iostream>
using namespace std;
int main()
{
    int radius;
    int diameter;
    int circumference;
    int area;
    
    cout<<"Enter the radius of the circle: ";
    cin>>radius;
    diameter=radius*2;
    cout<<"The diameter of the circle is: "<<diameter<<endl;
    circumference=2*3.14*radius;
    cout<<"The circumference of the circle is: "<<circumference<<endl;
    area=3.14*radius*radius;
    cout<<"The area of the circle is: "<<area<<endl;
}
