//Example 5.12: Modification of above program static method for displaying count
#include<iostream.h>
#include<conio.h>
class student
{
	private:
	int roll;
	char name[20];
	static int count; //static data member
	public:
	void getdata()
	{
		cout<<"Enter roll and name"<<endl;
		cin>>roll>>name;
		count++;
	}
	static void displaycount()
	{
		cout<<"count:"<<count<<endl;
	}
};
int student :: count=0;

int main()
{
	student s1, s2, s3;
	student::displaycount();
	s1.getdata();
	s2.getdata();
	s3.getdata();
	student::displaycount();
	getch();
	return 0;
}
