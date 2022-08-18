#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

void sortArray(int arr[], int size){
    for(int i = 0; i < size - 1 ; i++){
        int minIndex = i;
        for(int j = i+1; j < size; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main(){
    cout << "Enter the size of the array: ";
    int size; cin >> size;

    cout << "Enter the elements to insert in the array: ";
    int arr[100];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    printArray(arr, size);
    cout << endl;
    sortArray(arr, size);
    printArray(arr, size);
}