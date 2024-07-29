// Program to print sum of digits of a given no. i.e. a[3] = {10 20 30} -> 10+20+30=60 	

#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the size of the array: ";
    cin>>n;
    
    int a[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"Sum of array elements, [ ";

    for(int i=0;i<n;i++)
    {
        sum = sum + a[i];
        cout<<a[i]<< " ";
    }
    cout<<"]";
    cout<<" = "<<sum;
    
}