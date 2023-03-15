//Example 5.10: Program that adds two objects of Complex class
#include<iostream.h>
#include<conio.h>
class Complex
{
private:
int real,img;
public:
void getdata( )
{
	cout<<"Enter values of real and imaginary"<<endl;
	cin>>real>>img;
}
void display()
{
	cout<<"("<<real<<"+i"<<img<<")"<<endl;
}
Complex addComplex(Complex c)
{
	Complex temp;
	temp.real=real+c.real;
	temp.img=img+c.img;
	return temp;
}
};
int main( )
{
	Complex c1,c2,c3;
	c1.getdata();
	c2.getdata();
	c3=c2.addComplex(c1);
	cout<<"Addition=";
	c3.display();
	getch();
	return 0;
}
