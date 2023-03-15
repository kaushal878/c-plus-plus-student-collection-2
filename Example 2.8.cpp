//Program to allocate and destroy the memory dynamically
#include<iostream.h>
#include<conio.h>
int main()
{
int n,i=1;
float tot_age=0,avg_age;
int a,*p;
cout<<"Enter number of students"<<endl;
cin>>n;
cout<<"Enter age of each student"<<endl;
while(i<=n)
{
	cin>>*p;
	tot_age=tot_age+*a;
	i++;
	p++;
}
avg_age=tot_age/n;
cout<<"Average Age:"<<avg_age<<endl;
getch();
return 0;
}
