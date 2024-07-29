// Program to find frequency of each element in an integer array i.e. a[5] = {1 2 3 1 2} => 1->2, 2->2, 3->1

#include<iostream>
using namespace std;
int main()
{
    int n,count;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   int flag[n] = {0};   
   cout<<"Frequency of element: \n";
   for (int i = 0; i < n; i++)
   {
        count= 0;
        if(flag[i] != 1)
        {
            for (int j = 0; j < n; j++)
            {
               if (a[i]==a[j])
               {
                     count++;
                     flag[j] = 1;
               }
            }
            if ( count>1 || count==1)
            {
                cout<<a[i]<<" -> "<<count<<endl;
            }                        
        }
   }
   return 0;  
}