#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#define PI 3,1415//compiler cannot capture error at this line
int main()
{
float a,r;
cout<<"Enter radius of the circle"<<endl;
cin>>r;
a=PI*r*r;
cout<<"Area of circle:"<<setprecision(4)<<a<<endl;
getch();
return 0;
}
