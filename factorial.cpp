#include<iostream>
using namespace std;

int main(){
    int a,i,c=1;
    cout<<"Enter a number:";
    cin>>a;
    for(i=a;i>1;i--)
    {
        c=c*i;
    }
    cout<<c;
}
