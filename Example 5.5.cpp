//Example 5.4: Pointer to Classess
#include<iostream.h>
#include<conio.h>
class Item
{
int code, price;
public:
void getdata()
{
	cout<<"Enter code and price:"<<endl;
cin>>code>>price;
}
void showdata()
{
	cout<<"Code="<<code<<endl;
	cout<<"Price="<<price<<endl;
}
};

int main()
{
Item *a=new Item(); //pointer object
Item b;
a->getdata();
b.getdata();
cout<<"-----Item Details------"<<endl;
cout<<"First Item:"<<endl;
a->showdata();
cout<<"Second Item:"<<endl;
b.showdata();
getch();
return 0;
}
