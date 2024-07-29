// Program to swaap two numbers without using a third variable. i.e. a=5, b=10 -> a=10, b=5
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter a: ";
    cin >> a; // a=5
    cout << "Enter b: ";
    cin >> b; // b=10
    cout << "Before swaping a = " << a << " b = " << b << endl;
    a = a + b; // a=15 (5+10)
    b = a - b; // b=5 (15-10)
    a = a - b; // a=10 (15-5)
    cout << "After swaping a = " << a << " b = " << b << endl;
    return 0;
}