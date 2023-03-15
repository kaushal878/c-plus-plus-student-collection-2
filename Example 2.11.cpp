//Program using const modifier to define constant, try this program and analyze the error
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
int main()
{
float a,r;
const PI=3,1415//Compiler captures error at this line
cout<<"Enter radius of the circle"<<endl;
cin>>r;
a=PI*r*r;
cout<<"Area of circle:"<<setprecision(2)<<a<<endl;
getch();
return 0;
}
