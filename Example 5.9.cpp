//Example 5.9: Program to add two objects each having private data members feet and inches.
#include<iostream.h>
#include<conio.h>
class distance
{
private:
int feet;
int inches;
public:
void setdata(int f,float i)
{
	feet=f;
	inches=i;
}
void adddistance(distance d1, distance d2)
{
	feet = d1.feet + d2.feet;
	inches = d1.inches + d2.inches;
	feet=feet + inches/12;
	inches=inches%12;
}
void display()
{
	cout<<"("<<feet<<", "<<inches<<")"<<endl;
}
};
int main()
{
	distance d1, d2, d3;
	d1.setdata(5, 6);
	d2.setdata(7, 8);
	d3.adddistance(d1,d2);
	cout<<"d1 = ";
	d1.display();
	cout<<"d2 = ";
	d2.display();
	cout<<"d3 = ";
	d3.display();
	getch();
	return 0;
}
