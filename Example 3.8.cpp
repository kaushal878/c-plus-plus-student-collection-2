//Continue loop example
#include <iostream.h>
#include<conio.h>
int main( ) 
{
	for(int n = 0; n<6; n++) 
    {
            cout << "n = " << n << '\n';
            if(n%2 == 1) continue;
            cout << "This is even\n";
    }
    getch( );
    return 0;
}
