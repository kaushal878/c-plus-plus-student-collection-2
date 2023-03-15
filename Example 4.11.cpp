//Example 4.11: Return by reference
#include<iostream.h>
#include<conio.h>
int& min(int &x, int &y)
{
    if(x<y)
    return x;
    else
    return y;
}
int main()
{
    int a,b,r;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    min(a,b)=0;
    cout<<"a="<<a<<endl<<"b="<<b;
    getch();
    return 0;
}	

