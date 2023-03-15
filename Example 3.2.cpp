#include<iostream.h>
#include <conio.h>
int main()
{
 float gs,ns,tax;
 cout<<"Enter Gross Salary"<<endl;
 cin>>gs;
 if(gs>40000)
 tax=gs*20/100;
 else if(gs>30000)
 tax=gs*15/100;
 else if(gs>20000)
 tax=gs*10/100;
 else
 tax=0;
 ns=gs-tax;
 cout<<"Tax="<<tax<<endl;
 cout<<"Net Salary="<<ns<<endl;
 getch();
 }
