#include<iostream.h>
#include<conio.h>
int main ( )
{
float x; // declaration
float sum = 0; 
for (int i = 0; i<5; i++) //declaration
{
    cout<<"Enter number"<<endl;
    cin >> x;
    sum = sum+x;
}
float average; //declaration
average = sum / 5;
cout <<"Average="<<average;
getch();
return 0;
}
