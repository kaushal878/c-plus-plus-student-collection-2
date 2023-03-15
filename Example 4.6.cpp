//Example 4.6: Overloading Functions with different number of arguments
#include<iostream.h>
#include<conio.h>
int area(int l, int b)
{
	return l*b;
}
int area(int l)
{
	return l*l;
}
int main()
{
int sa,ra,l,b;
cout<<"Enter length and breadth of rectangle"<<endl;
cin>>l>>b;
ra=area(l,b);
cout<<"Enter length of a side of an square"<<endl;
cin>>l;
sa=area(l);
cout<<"Area of Rectangle="<<ra<<endl;
cout<<"Area of Square="<<sa<<endl;
getch();
return 0;
}
