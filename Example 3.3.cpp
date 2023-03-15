#include<iostream.h>
#include<conio.h>
int main()
{
 int d;
 cout<<"Enter day of week:";
 cin>>d;
 switch(d)
 {
	case1:
		cout<<"The day is sunday";
		break;
	case 2:
		cout<<"The day is monday";
		break;
	case 3:
		cout<<"The day is tuesday";
		break;
	case 4:
		cout<<"The day is wednesday";
		break;
	case 5:
		cout<<"The day is thursday";
		break;
	case 6:
		cout<<"The day is friday";
		break;
	case 7:
		cout<<"The day is saturday";
		break;
	default:
		cout<<"Sorry!!!!!!! Wrong day";
 }
	getch();
 }
