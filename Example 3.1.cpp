#include<iostream.h>
#include<conio.h>
int main()
{
   int s,c;
   cout<<"Enter total sales of the person:";
   cin>>s;
   c=(5*s)/100;
   if(s>=5000)
   {
        cout<<"commission is="<<c;
   }
   else
   {
       cout<<"commissionis zero";
   }
   getch();
   }
