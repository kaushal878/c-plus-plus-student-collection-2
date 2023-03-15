// Function overloading with different type of arguments
#include <iostream.h>
#include<conio.h>
int mul (int a, int b)
{
	return (a*b);
}
float mul (float a, float b)
{
	return (a*b);
}
int main ()
{
	int x=5,y=2;
	float n=7.0,m=3.0;
	cout <<"Product of integers:"<< mul (x,y);
	cout << "\n";
	cout <<"Product of reals:"<< mul(n,m);
	cout << "\n";
	getch();
	return 0;
}
