//Example 5.7: Access Specifiers and their visiblity
#include<iostream.h>
#include<conio.h>
class Test
{
private:
int x;
public:
int y;
void getdata()
{
cout<<"Enter x and y"<<endl;
cin>>x>>y;
}
void display()
{
cout<<"x="<<x<<"y="<<y<<endl;
}
};
int main()
{
Test p;
p.getdata();
cout<<"Enter  value of x"<<endl;
cin>>p.x;
cout<<"Enter value of y"<<endl;
cin>>p.y;
getch();
return 0;
}
