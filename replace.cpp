#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for ( int i= 0; i < size; i++){
        cout << arr[i];
    }
}

void replace(int arr[], int size, int index, int key){
    for(int i = 0; i < size; i++){
        if(i == index){
            arr[i] = key;
        }
    }
}

int main(){
    cout << "Enter the size of the array: ";
    int size; cin >> size;
    
    cout << "Enter the elements of the array: ";
    int arr[1000];
    for ( int i= 0; i < size; i++){
        cin >> arr[i];
    }

    cout << "Enter the index: ";
    int index; cin >> index;

    cout << "Enter the element you want to insert: ";
    int key; cin >> key;

    printArray(arr, size);
    replace(arr, size, index, key);
    
    cout << "The new array is: ";
    printArray(arr, size);


}