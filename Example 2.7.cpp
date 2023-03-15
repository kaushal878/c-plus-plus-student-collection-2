//Program to get fractional result from division of two integers
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
int main()
{
int x,y;
float z;
cout<<"Enter two numbers"<<endl;
cin>>x>>y;
//Since x and y both are negative, result can not be fractional
//even if z is float
z=x/y;
cout<<"Result of division without casting="<<setprecision(2)<<z<<endl;
//To get the fractional result, any one of the operand involving in division
//must be converted into float
z=float(x)/y;
cout<<"Result of division with casting="<<setprecision(2)<<z<<endl;
getch();
return 0;
}
