//Example 5.4: Defining Member Functions
#include<iostream.h>
#include<conio.h>
class rectangle
{
private:
int length;
int breadth;
public:
void setdata(int l, int b)
{
length=l;
breadth=b;
}
void showdata();
int findarea();
int findperimeter();
};
void rectangle :: showdata()
{
cout<<"Length = "<<length<<endl<<"Breadth = "<<breadth<<endl;
}
int rectangle :: findarea()
{
return length * breadth;
}
int rectangle :: findperimeter()
{
return 2 * (length + breadth);
}
int main()
{
int a,p;
rectangle r;
r.setdata(4,5);
r.showdata();
a=r.findarea();
cout<<"Area="<<a<<endl;
p=r.findperimeter();
cout<<"Perimeter="<<p<<endl;
getch();
return 0;
}
