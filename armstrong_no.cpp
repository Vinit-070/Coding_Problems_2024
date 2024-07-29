// check no. is Armstrong or not
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,ld,sum=0,c; // ld = last digit
    cout<<"Enter a number: ";
    cin>>n;
    c=n;
// =========== skip this part if you want fixed length replace the no. with 'len' in while loop ===========
    int j = n;

// the "length" of 0 is 1:
int len = 1;

// and for numbers greater than 0:
if (j > 0) {
    // we count how many times it can be divided by 10:
    // (how many times we can cut off the last digit until we end up with 0)
    for (len = 0; j > 0; len++) {
        j = j / 10;
    }
}
// =======================================================================================================
    while (n>0)
    {
        ld = n % 10;
        sum = sum + pow(ld,len);
        n = n / 10;

    }
    if (sum==c)
    {
        cout<<"The number is Armstrong";
    }
    else
    {
        cout<<"The number is not Armstrong";
    }
    
    
}



