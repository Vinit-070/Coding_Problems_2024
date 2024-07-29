// Program to reverse a no. i.e. 123 -> 321

#include<iostream>
using namespace std;
int main(){
    int n,c,r,s=0;
    cout<<"Enter a number: ";
    cin>>n;
    c=n;
    while(n>0)
    {
        r=n%10;
        s=(s*10)+r;
        n=n/10;
    }
    cout<<"The reverse of the number is: "<<s;
}