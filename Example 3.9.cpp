// goto loop example
#include <iostream.h>
#include<conio.h>
int main ()
{
int n=10;
loop:
cout << n << ", ";
n--;
if (n>0) 
goto loop;
cout << "FIRE!";
getch( );
return 0;
}
