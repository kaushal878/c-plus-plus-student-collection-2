//Example 5.6: Array of Objects
#include <iostream.h>
#include<conio.h>
const int MAX  =100;
class Employee
{
	private:
	int salary;
	int id;
	public:
	void getdata( )
	{
		cout  <<"Enter the ID:";
		cin >> id;
		cout  << "Enter the salary:";
		cin >> salary;
	}
	void putdata( )
	{
		cout <<"ID:" <<id<< "\tSalary:" << salary <<endl;
	}
};
int main()
{
	Employee e[MAX];
	int n=0;
	char ans;
	do
	{
		cout  << "Enter the Employee Number::"<<n+1<<endl;
		e[n++].getdata();
		cout << "Enter another (y/n)?: " ;
		cin >> ans;
	} while ( ans != 'n' );
	cout<<endl<<"*******Employee Details*******"<<endl;
	for (int j=0; j<n; j++)
	{
		cout << "\nEmployee Number is:: " << j+1;
		e[j].putdata( );
	}
	getch();
	return 0;
}
