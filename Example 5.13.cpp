//Example 5.13: Complete Program showing use of  nested class
#include<iostream.h>
#include<conio.h>
class Employee
{
	public:
	void getdata()
	{
		cout<<"Enter Id, Name and Salary of an employee"<<endl;
		cin>>eid>>ename>>salary;
		cout<<"Enter Date of Birth of an Employee"<<endl;
		db.getDOB();
	}
	void display()
	{
		cout<<"EID:"<<eid<<endl;
		cout<<"Name:"<<ename<<endl;
		cout<<"Salary:"<<salary<<endl;
		cout<<"DOB:";
		db.displayDOB();
	}
	class DOB
	{
		int y,m,d;
		public:
		void getDOB()
		{
			cout<<"Enter Year:";
			cin>>y;
			cout<<"Enter Month:";
			cin>>m;
			cout<<"Enter Day:";
			cin>>d;
		}
		void displayDOB()
		{
			cout<<y<<"-"<<m<<"-"<<d<<endl;
		}
	};
	private:
	int eid, salary;
	char ename[20];
	DOB db;

};
int main()
{
	Employee e;
	e.getdata();
	cout<<"######Employee Details#######"<<endl;
	e.display();
	getch();
	getch();
}
