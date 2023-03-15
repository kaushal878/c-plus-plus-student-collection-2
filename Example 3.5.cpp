//Program to generates the Fibonacci series between 1 and 100. 
#include<iostream.h>
#include<conio.h>
int main ( )
{
    int num1 = 1, num2 = 1;
     cout << num1 <<"\t";
     while ( num2 < 100)
     {
           cout << num2 <<"\t";
           num2 += num1;
           num1 = num2 - num1;
     }
     getch();
     return 0;
}
