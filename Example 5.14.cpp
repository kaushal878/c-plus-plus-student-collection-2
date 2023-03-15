//Example 5.14: constant member variables
#include<iostream.h>
#include<conio.h>
class Fred 
{
const int size;
public:
	Fred(int sz): size(sz)
	{ }
  	void print()
	{
		cout << size << endl;
	}
};
int main() 
{
	Fred a(1), b(2), c(3);
  	a.print(), b.print(), c.print();
	getch();
	return 0;
}
