// check given no. is positive or negative   i.e. n=-7 -> -7 is a negative number.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n>0)
    {
        cout<<n<<" is a positive number.";
    }
    else if(n<0)
    {
        cout<<n<<" is a negative number.";
    }
    else
    {
        cout<<n<<" is neither positive nor negative.";
    }
    return 0;
}