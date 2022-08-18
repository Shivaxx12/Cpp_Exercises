#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

void sortArray(int arr[], int size){
    int start = 0, end = size - 1;
    while(start < end){

        while(arr[start] == 0){
        start++;
        }

        while(arr[end] == 1){
        end--;
        }

        if(start < end){
            swap(arr[start], arr[end]);
        }
    }
}

int main(){

    cout << "Enter the size of the array: ";
    int size; cin >> size;

    int arr[1000];
    cout << "Enter the elements of the array: ";
    for ( int i = 0; i < size; i++){
        cin >> arr[i];
    }

    sortArray(arr, size);
    printArray(arr, size);
}


