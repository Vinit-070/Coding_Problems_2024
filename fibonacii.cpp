// Print fibonacii series upto n terms i.e. n=5 -> 0 1 1 2 3

#include<iostream>
using namespace std;
int main()
{
    int n,a=0,b=1,sum;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        sum=a+b;
        a=b;
        b=sum;
    }
}