// check gien no. is odd or even i.e. n=7 -> 7 is an odd number.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n%2==0)
    {
        cout<<n<<" is an even number.";
    }
    else
    {
        cout<<n<<" is an odd number.";
    }
    return 0;
}