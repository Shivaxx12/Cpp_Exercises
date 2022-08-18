#include <iostream>
#include<vector>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i< size; i++){
        cout << arr[i] << " ";
    }
}
void insertionSort(int arr[], int size){
    for(int i = 1; i < size; i++){
        int temp  = arr[i];
        int j = i - 1;
        for(; j >= 0; j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}
int main(){
    cout << "Enter the size of the array: ";
    int size; cin >> size;
    cout << "Enter the elements of the array: ";
    int arr[100];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    printArray(arr, size);
    insertionSort(arr, size);
    cout << endl << "Sorted Array is: " << endl;
    printArray(arr, size);
}