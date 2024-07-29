// Print tribonacii series upto n terms i.e. n=5 -> 0 1 2 3 6

#include<iostream>
using namespace std;
int main()
{
    int n,a=0,b=1,c=2,sum;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        sum=a+b+c;
        a=b;
        b=c;
        c=sum;
    }	
}