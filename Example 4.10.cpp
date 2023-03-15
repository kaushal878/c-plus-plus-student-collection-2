//Example 4.10: Return by value
#include<iostream.h>
#include<conio.h>
float calculate_amount(float p, float t, float r)
{
float si;
si=(p*t*r)/100;
return(p+si);
}

int main()
{

float p,t,r,a;
cout<<"Enter values of p, t, r"<<endl;
cin>>p>>t>>r;
a=calculate_amount(p,t,r);
cout<<"amount="<<a<<endl;
getch();
return 0;
}
