#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int bubbleSort(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        bool swapped = true;
        for(int j = 0; j < size - i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }
}

int main(){
    cout << "Enter the size of the array: ";
    int size; cin >> size;
    
    cout << "Enter the elements of the array: ";
    int arr[1000];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    printArray(arr, size);
    cout << endl << endl;
    bubbleSort(arr, size);
    cout << "Sorted array is: " << endl;
    printArray(arr, size);
}