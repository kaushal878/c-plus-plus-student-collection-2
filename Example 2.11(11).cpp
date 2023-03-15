#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;  
int main()
{
    float a, r;
    const float PI = 3.1415;
    cout << "Enter radius of the circle" << endl;
    cin >> r;
    a = PI * r * r;
cout << "Area of circle: " << setprecision(2) << a << endl;
    return 0;
}
