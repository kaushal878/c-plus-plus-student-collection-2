//Example 5.2: C++ Structures
#include<iostream.h>
#include<conio.h>
struct Employee
{
private:
int eid,sal;
public:
void getdata( )
{
	cout<<"Enter ID and Salary of an employee"<<endl;
	cin>>eid>>sal;
}
void display( )
{
       cout<<"Emp ID:"<<eid<<endl<<"Salary:"<<sal<<endl;
}
};
int main( )
{
	Employee e;
	e.getdata( );
	cout<<"Employee Details"<<endl;
    cout<<"-----------------"<<endl;
	e.display( );
	getch(  );
	return 0;
}
