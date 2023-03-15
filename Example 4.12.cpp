//Example 4.12: Return by pointer
#include<iostream.h>
#include<conio.h>
int* min(int *x, int *y)
{
if(*x<*y)
return x;
else
return y;
}
int main()
{
int a,b;
cout<<"Enter two numbers"<<endl;
cin>>a>>b;
int *m=min(&a,&b);
cout<<"Smaller Element is:"<<*m<<endl;
getch();
return 0;
}
