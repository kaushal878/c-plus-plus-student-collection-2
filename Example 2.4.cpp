#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<string.h>
int main()
{
int i,l;
int m[5];
char sub[5][20]={"Mathmatics","English","C Prog", "Statistics","Sociology"};
float total=0.0,per;
cout<<"Enter marks of Mathmatics, English, C Prog, Statistics and Sociology"<<endl;
for(i=0;i<5;i++)
{
        cin>>m[i];
}

cout<<"\t"<<"Subject"<<setw(15)<<"Marks"<<endl;
cout<<"\t"<<"----------------------"<<endl;
for(i=0;i<5;i++)
{
total=total+m[i];
l=strlen(sub[i]);
cout<<"\t"<<sub[i]<<setw(22-l)<<m[i]<<endl;
}
per=total/5;
cout<<"\t"<<"-----------------------"<<endl;
cout<<"\t"<<"Total"<<setw(17)<<total<<endl;
cout<<"\t"<<"Percentage"<<setw(12)<<setprecision(2)<<per<<endl;
getch();
return 0;
}
