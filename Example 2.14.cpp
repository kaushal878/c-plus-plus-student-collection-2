//Using namespaces
#include<iostream.h>
#include<conio.h>
#include<string.h>
namespace digit
{
	int count=0;
};
namespace character
{
	int count=0;
};
namespace other
{
	int count=0;
};
int main()
{
	char str[]="1.Nepal 2.India 3.China";
	int i=0;
	while(str[i]!='\0')
	{
		if(isdigit(str[i]))
		digit::count++;
		else if(isalpha(str[i]))
		character::count++;
		else
		other::count++;
		i++;
	}
	cout<<"Number of Digits="<<digit::count<<endl;
	cout<<"Number of Characters="<<character::count<<endl;
	cout<<"Number of other Characters="<<other::count<<endl;
	getch();
	return 0;
}
