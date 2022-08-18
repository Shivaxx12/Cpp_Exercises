#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
       cout << arr[i] << " "; 
    }
}

void moveZeroes(int arr[], int size){
    for(int i = 0; i < size; i++){
        int start = 0, end = size - 1, temp = 0, j = i+1;
            if(arr[i] == 0){
                for(int j = i+1; j < size; j++){
                    temp = arr[i];
                    arr[j-1] = arr[j];
                }
            }
    arr[j] = temp;
   }
}
    
    /*int count = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] == 0){
            count++;
        }
    }
    cout << count;*/

int main(){
    cout << "Enter the size of the array: ";
    int size; cin >> size;
    
    cout << "Enter the elements of the array: ";
    int arr[1000];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    printArray(arr, size);
    cout << endl;
    moveZeroes(arr,size);
    printArray(arr, size);
}