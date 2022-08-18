#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int intersection(int arr[], int s1, int brr[], int s2){
    for(int i = 0; i < s1; i++){
        int element = arr[i];
            for(int j = 0; j < s2; j++){
                if(element == brr[j]){
                    cout<< brr[j]<<" ";
                    brr[j] = INT_MIN;
                    break;
                }   
            }
    }
}

int main(){

    //Array - 1;
    cout << "Enter the size of the array: ";
    int s1; cin >> s1;

    cout << "Enter the elements of the array: "; 
    
    int arr[1000];
    for( int i = 0; i < s1; i++){
        cin >> arr[i];
    }

    //Array - 2;
    cout << "Enter the size of the array2: ";
    int s2; cin >> s2;

    cout << "Enter the elements of the array2: "; 
    
    int brr[1000];
    for(int i = 0; i < s2; i++){
        cin >> brr[i];
    }

    printArray(arr, s1); cout << endl;
    printArray(brr, s2); cout << endl;
    
    intersection(arr, s1, brr, s2);
}