// Program to print biggest and smallest element of an array  i.e. a[3] = {10 20 30} -> biggest=30, smallest=10 	

#include<iostream>
using namespace std;
int main()
{
    int n,min,max;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }   
    }
    min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }   
    }
    cout<<"Biggest element of the array is: "<<max<<endl;
    cout<<"Smallest element of the array is: "<<min;
    

}