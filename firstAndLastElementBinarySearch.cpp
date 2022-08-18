#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i < 0; i++){
        cout << arr[i];
    }
}

int occurence(int arr[], int size, int key){
    int start = 0, end = size - 1, mid = (start + end)/2, ans = -1;
    while(start < end){
        if (arr[mid] == key){
            ans = mid;
            return mid;
        }

        else if (key > mid){
            start = mid + 1;
        }

        else{
            end = mid - 1;
        }

        mid = (start + (end - start)/2);
    }
}

int main(){

}