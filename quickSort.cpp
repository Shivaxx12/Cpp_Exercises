#include <iostream>
using namespace std;
void printArray(int arr[], int size){
    for (int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
}
int partition(int arr[],  int end, int start){
    int p = arr[end];
    int i = start;
    for (int j = start + 1; j < end; j++){
        if (arr[j] <= p){
            i++;
            swap(arr[i],arr[j]);
        }        
        swap(arr[i+1],arr[end]);
        return (i+1);
    }
}
int quicksort(int arr[], int start , int end){
    int p=partition(arr,end, start);
    quicksort(arr, start, p-1);
    quicksort(arr, p+1, end);
    for (int i = 0; i<6; i++){
        cout << arr[i] << " ";
        return 0;
    }
}
int main(){
    int arr[]={1,5,2,3,7,4};
    int start=0;
    int end=6;
    quicksort(arr,start,end);
    printArray(arr, 6);
    return 0;
}