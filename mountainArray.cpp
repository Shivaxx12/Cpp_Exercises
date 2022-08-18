#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int mountain(int arr[], int size){
    int start = 0, end = size - 1, mid = start + (end - start)/2;

    while(start < end){
        if(arr[mid] < arr[mid + 1]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        
        mid = start + (end - start)/2;
    }
    return mid;
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
    cout << endl;
    cout << mountain(arr, size) << endl;
    printArray(arr, size);

}