#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum = sum + i;
        }
    }
    if(sum==n){
        cout<<"The number is perfect";
    }
    else{
        cout<<"The number is not perfect";
    }
}