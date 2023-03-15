#include<iostream.h>
#include<conio.h>
int main()
{
int a=2;
int b=a;
cout<<"Normal Variable"<<endl;	
cout<<"a="<<a<<"\t"<<"b="<<b<<endl;
b=b+5;
cout<<"a="<<a<<"\t"<<"b="<<b<<endl;
/*When "b" is changed value of "a" remain unchanged because "a" and "b" points to two different memory locations. */
//Experiment with reference variables
int x=3;
int &y=x;
cout<<"Reference Variable"<<endl;
cout<<"x="<<x<<"\t"<<"y="<<y<<endl;
y=y+5;
cout<<"x="<<x<<"\t"<<"y="<<y<<endl;
/*When "y" is changed value of "x" remain unchanged because "x" and "y" points to same memory location. */
getch();
return 0;
}
