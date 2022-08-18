#include<iostream>
using namespace std;


void reverseArray(int *arr[],int n){
    int s=0;
    int e=n-1;

    while(s<e){
        swap(arr[s],arr[e]); // swap here is an inbuilt function
        s+=1;
        e-=1;
    }
}
int main(){
    int n;
    cout<<"enter the number of elements"<<endl;
    cin>>n;

    int *arr = new int[n];
    cout<<"Enter "<<n<<"elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    reverseArray(arr,n);

    cout<<"entered elements are : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    delete[] arr;

    return 0;
}