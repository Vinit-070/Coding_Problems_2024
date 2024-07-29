// Check Palindrome number using C++  i.e.  121 -> palindrome

#include<iostream>
using namespace std;
int main()
{
    int n,s=0,c,r;
    cout<<"Enter a number: ";
    cin>>n;
    c=n;
    while(n>0)
    {
        r=n%10;
        s=(s*10)+r;
        n=n/10;
    }
    if (c==s)
    {
        cout<<"The number is palindrome";
    }
    else
    {
        cout<<"The number is not palindrome";
    }
    
}