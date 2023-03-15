// Example 5.8: Nesting of Member functions
#include<iostream.h>
#include<conio.h>
class total
{
private:
float principle, time, rate;
float findinterest()
{
	return principle * time * rate / 100;
}
public:
void setdata(float p, float t, float r)
{
	principle = p;
	time = t;
	rate = r;
}
float findtotal()
{
	return principle + findinterest();
}
};
int main()
{
float p,t,r,a;
total ta;
cout<<"Enter values of p, t, r"<<endl;
cin>>p>>t>>r;
ta.setdata(p,t,r);
a=ta.findtotal();
cout<<"Total Amount="<<a<<endl;
getch();
return 0;
}
