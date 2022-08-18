#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int getPivot(int arr[], int size){
    int start = 0, end = size - 1, mid = start + (end - start)/2;
    while (start < end){
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
       mid = start + (end - start)/2;
    }
    return start;
}

int binarySearch(int arr[], int s, int e, int key){
    int start = s, end = e, mid = start + (end - start)/2;
    while(start < end){
        if(arr[mid] == key){
            return mid;
        }

        if(arr[mid] >= key){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }   
    return -1;
}

int findPosition(int arr[], int size, int key){
    int pivot = getPivot(arr, size);
    if(key >= arr[pivot] && key <= arr[size - 1]){
        return binarySearch(arr, pivot, size - 1, key);
    }
    else{
        return binarySearch(arr, 0, pivot - 1, key);
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
    
    cout << "Enter the key to search for: ";
    int key; cin>>key;

    printArray(arr, size);
    cout << endl;
    cout << "The pivot is at : " << getPivot(arr, size) << endl;
    cout << "The element is at : " << findPosition(arr, size, key);
}
