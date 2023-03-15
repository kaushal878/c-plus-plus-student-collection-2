//Example:5.11 program for counting number of objects
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
	void displaycount()
	{
		cout<<"count:"<<count<<endl;
	}
};

int student :: count=0;//Assignment of value of to static data members

int main()
{
	student s1, s2, s3;
	s1.displaycount();
	s2.displaycount();
	s3.displaycount();
	s1.getdata();
	s2.getdata();
	s3.getdata();
	s1.displaycount();
	s2.displaycount();
	s3.displaycount();
	getche();
	return 0;
}
