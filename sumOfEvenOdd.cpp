#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int arr[6]={50,45,40,35,30,25};
    int i,oddSum=0,evenSum=0;
    for(i=0; i<6; i++){
        if(arr[i]%2==0){
        evenSum=evenSum+arr[i];
        }
    else{
             oddSum=oddSum+arr[i];
        }
    }
    cout<<"The sum of odd numbers are:"<<oddSum;
    cout<<"\nThe sum of even numbers are:"<<evenSum;
    getch();
    return 0;
}