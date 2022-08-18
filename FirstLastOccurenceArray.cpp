#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int firstOccur(int arr[], int size, int key){
    int start = 0, end = size - 1, mid = start + ((end - start)/2), ans = -1;
    while (start <= end){

        if(key == arr[mid]){
            ans = mid;
            end = mid - 1;
        }

        else if(key < arr[mid]){
            end = mid - 1;
        }

        else if(key > arr[mid]){
            start = mid + 1;
        }

        mid = start + ((end - start)/2);
    }
    return ans;
}

int lastOccur(int arr[], int size, int key){
    int start = 0, end = size - 1, mid = start + ((end - start)/2), ans = -1;
    while (start <= end){

        if(key == arr[mid]){
            ans = mid;
            start = mid + 1;
        }

        else if(key < arr[mid]){
            end = mid - 1;
        }

        else if(key > arr[mid]){
            start = mid + 1;
        }

        mid = start + ((end - start)/2);
    }
    return ans;
}

int main(){
    cout << "Enter the size of the array: ";
    int size; cin >> size;

    cout << "Enter the elements of the array: ";
    int arr[1000];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    cout << "Enter the key to search for: ";
    int key; cin >> key;

    printArray(arr, size);
    cout << endl;
    cout << "First occurence is: " << firstOccur(arr, size, key) << endl;
    cout << "Last occurence is: " << lastOccur(arr, size ,key) << endl;
}