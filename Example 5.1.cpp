#include<iostream.h>
#include<conio.h> 
struct currency 
{ 
int rupees; 
float paise; 
}; // currency is name for struct currency 
int main() 
{ 
currency c1,c3; 
currency c2 ={123,56.4}; 
cout<<"Enter Rupees:"; cin>> c1.rupees; 
cout<<"Enter paises"; cin>> c1. paise; 
c3.paise = c1.paise+ c2.paise; 
if(c3.paise>=100.0) 
{ 
c3.paise-=100.0 ; 
c3.rupees++; 
} 
c3.rupees+=c2.rupees+c1.rupees; 
cout<<"Rs." <<c1.rupees<<" Ps. " <<c1.paise<<" + "; 
cout<<"Rs." <<c2.rupees<<" Ps. "<<c2.paise<<" = "; 
cout<< "Rs."<<c3.rupees<<" Ps."<<c3.paise<<endl; 
getch();
return 0;
}
