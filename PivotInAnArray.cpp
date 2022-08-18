#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}
int pivotIndex(int arr[], int size){
    int start = 0, end = size - 1, mid;
    int sum1 = 0, sum2 = 0;
    while (start <= end){
        mid = start + (end-start)/2;
        for (int i = 0; i < mid; i++){
            sum1 = sum1 + arr[i];
        }
        for (int j = mid + 1; j < size; j++){
            sum2 = sum2 + arr[j];
        }
        if (sum1 == sum2){
            return mid;
        }
        else if (sum1 > sum2){
            end = mid - 1;
            sum1 = 0;
            sum2 = 0;
        }
        else if (sum2 > sum1){
            start = mid + 1;
            sum1 = 0;
            sum2 = 0;
        }
        else if(mid == arr[0]){
            sum1 = 0;
        }
        else if(mid == arr[size - 1]){
            sum2 = 0;
        }
    }
    return -1; 
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
    cout << pivotIndex(arr, size);
}