//Example 5.3: A Complete Program using class
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
	length = l;
	breadth = b;
}
void showdata()
{
	cout<<"Length = "<<length<<endl<<"Breadth = "<<breadth<<endl;
}

int findarea()
{
	return length * breadth;
}
int findperemeter()
{
	return 2 * length * breadth;
}
};
int main() 
{
	rectangle r;
	r.setdata(4, 2);
	r.showdata();
	cout<<"Area= "<<r.findarea()<<endl;
	cout<<"Peremeter= "<<r.findperemeter();
	getche();
	return 0;
}
