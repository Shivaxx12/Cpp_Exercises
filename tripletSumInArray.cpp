#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++){
        cout << arr[i];
    }
}

int tripletSum(int arr[], int size, int sum){
    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
            for(int k = i+2; k < size; k++){
                if(arr[i] + arr[j] + arr[k] == sum){
                    cout << arr[i] << ", " << arr[j] << ", " << arr[k] << "   ";
                    break;
                }
            }
        }
    }
}

int main(){
    cout << "Enter the size of the array: ";
    int size; cin >> size;

    cout << "Enter the elements of the array: ";
    int arr[1000];
    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }

    cout << "Enter the sum: ";
    int sum; cin >> sum;

    tripletSum (arr, size, sum);
}
