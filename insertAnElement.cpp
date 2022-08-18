#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

void insertElement(int arr[], int size, int index, int key){
    size += 1;
        for(int j = size; j >= index; j--){
            int temp = arr[j-1];
            arr[j] = temp;
            if(j == index){
                arr[j] = key;
            }
        }
    }

int main(){
    cout << "Enter the size of the array: ";
    int size; cin >> size;

    int arr[1000];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    cout << "Enter the index where you want to insert the element: ";
    int index; cin >> index;

    cout << "Enter the new element to insert: ";
    int key; cin >> key;

    printArray(arr, size);
    insertElement(arr, size, index, key);
    cout << endl;
    size += 1;
    printArray(arr,size);
}