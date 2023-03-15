//Program illustrating the use of enumeration
#include <iostream.h>
#include<conio.h>
enum Days {Sunday=1,  Monday, Tuesday, Wednesday, Thursday, Friday,Saturday};
int main( ) 
{
  enum Days today = Sunday;
   switch (today)
   {
      	case 2:
         	cout << "It's Monday" << endl;
         	break;
      	default:
         	cout << "Not Monday" << endl;
   	}
getch();
	return 0;
}
