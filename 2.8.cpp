#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;
    float tot_age = 0, avg_age;
    int a;
    int *p = &a;
    cout << "Enter number of students" << endl;
    cin >> n;
    cout << "Enter age of each student" << endl;
    while (i <= n)
    {
        cin >> *p;
        tot_age = tot_age + a;
        i++;
    }
    avg_age = tot_age / n;
    cout << "Average Age:" << avg_age << endl;
    return 0;
}