//Program showing limitation of macro
#include <iostream.h>
#include<conio.h>
#define mul(a,b) a*b
int main ()
{
    int result;
    result=mul(2+4,5);
    cout<<"Result="<<result<<endl;
    getch();
    return 0;
}
