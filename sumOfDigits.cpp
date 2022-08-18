#include<iostream>
using namespace std;

int main(){
    int a,sum=0,b;
    cout<<"Enter the number: ";
    cin>>a;
    while (a>0){
        b=a%10;
        sum+=b;
        a/=10;
    }
    cout<<"The sum of digits is: "<<sum;
}
