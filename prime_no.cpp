// Check prime no. using c++ i.e. 2,3,5,7.. -> prime

#include<iostream>
using namespace std;
int main()
{
    int n,c=0;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        cout<<"The number is prime";
    }
    else
    {
        cout<<"The number is not prime";
    }
}


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n, i, count=0;
//     cout<<"Enter a Number : ";
//     cin>>n;

//     for (i=2;i<n; i++)
//     {
//         if(n%i==0)
//         {
//             count++;
//             break;
//         }
//     }
//     if (n==0 || n==1 )
//     {
//         cout<<n<<" is not a prime number.";
//     }
    
//     else if (count==0)
//     {
//         cout<<n<<" is a prime number.";
//     }
//     else
//     {
//         cout<<n<<" is not a prime number.";
//     }
//     return 0;
// }