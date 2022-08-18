#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i];
    }
}

int binarySearch(int arr[], int size, int key){
    int start = 0, end = size - 1, mid = (start + end)/2;
    while (start <=  end){
        if(arr[mid] == key){
            return mid;
        }

        if(key > mid){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = (start + end)/2;
    }
    return -1;
}

int main(){
    cout<< "Enter the size of the array: ";
    int size; cin >> size;

    int arr[1000];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    cout << "Enter the key to search in the array: ";
    int key; cin >> key;

    cout << "The key is present at index " << binarySearch(arr, size, key);
}