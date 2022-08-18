#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int mergeArrays(int arr[], int arr2[], int size, int size2){
    int size3 = size + size2, n = 0;
    int i = size;
    while(i < size3){
        arr[i] = arr2[n];
        i++; n++;
    }
    
    /*for(int i = size; i < size3; i++){
        arr[i] = arr2[n];
        n++;
    }*/

    return 0;
}
int Sort(int arr[], int size){
    for(int i = 1; i < size; i++){
        int temp = arr[i];
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
    return 0;
}

int main(){
    cout << "Enter the size of the array: ";
    int size; cin >> size;
    cout << "Enter the element of the array: ";
    int arr[1000];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    cout << "Enter the size of the array2: ";
    int size2; cin >> size2;
    cout << "Enter the element of the array2: ";
    int arr2[1000];
    for(int i = 0; i < size2; i++){
        cin >> arr2[i];
    }
    printArray(arr, size);
    cout << endl;
    printArray(arr2, size2);
    cout << endl;
    mergeArrays(arr, arr2, size, size2);
    size += size2;
    Sort(arr, size);
    printArray(arr, size);

    return 0;
}