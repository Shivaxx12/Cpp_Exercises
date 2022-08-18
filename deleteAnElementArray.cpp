#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

void deletion(int arr[], int size, int index){
    for(int i = index; i <= size; i++){
        swap(arr[i], arr[i+1]);
    }
}

int main(){
    cout << "Enter the size of the array: ";
    int size; cin >> size;

    cout << "Enter the elements of the array: ";
    int arr[1000];
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }

    cout << "Enter the index of the element you want to delete: ";
    int index; cin >> index;

    printArray(arr, size);
    deletion(arr, size, index);
    size--;
    cout << endl;
    printArray(arr, size);
}