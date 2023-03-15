//break loop example
#include <iostream.h>
#include<conio.h>
int main ()
{
    int n;
    for (n=10; n>0; n--) 
    {
        cout << n << ", ";
        if (n==3)
        {
           cout << "countdown aborted!";
           break;
        }
    }
    getch();
    return 0;
}
