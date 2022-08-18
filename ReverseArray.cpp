#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int reverseArray(int arr[], int size, int start){
    int end = size - 1, index = start + 1;
    while (start < end){
        swap(arr[index],arr[end]);
        start++;
        end--;
    }
}

int main(){
    cout << "Enter the size of the array: ";
    int size; cin >> size;
    cout << "Enter the element of the array: ";
    int arr[1000];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    cout << "Enter the index about which to reverse: ";
    int start; cin >> start;

    printArray(arr, size);
    cout << endl;
    reverseArray(arr, size, start);
    printArray(arr, size);
}