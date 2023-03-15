//Example:
#include <iostream.h>
#include<conio.h>
inline void sum(int a, int b)
{
	int s;
	s= a+b;
	cout<<"Sum="<<s<<endl;
}
		
int main()
{
	int x, y;
	cout<<"Enter two numbers"<<endl;
	cin>>x>>y;
	sum(x,y);
	getch();
	return 0;
}
