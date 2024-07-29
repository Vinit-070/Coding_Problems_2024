// Program to print sum of digits of a given no. i.e. 123 -> 1+2+3=6	

#include<iostream>
using namespace std;
int main()
{
    int n,r,sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    while(n>0)
    {
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    }
    cout<<"Sum of the digits of the no. is: "<<sum;
}