//(1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)
#include<iostream>
using namespace std;

int main (){
    int a,sum=0;
    cout<<"Enter a number: ";
    cin>>a;
    for (int i=1;i<=a;i++){
        sum+=(i*i);
    }
    cout<<"The sum of series is: "<<sum;}
