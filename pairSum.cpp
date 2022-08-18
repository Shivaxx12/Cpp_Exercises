#include <iostream> 
using namespace std;

void printArray(int arr[], int size){
    for ( int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int pairSum(int arr[], int size, int sum){
    int i = 0;
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(arr[i] + arr[j] == sum){
                cout << arr[i] << "," << arr [j] << "  ";
            }
        }
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

    cout << "Enter sum: ";
    int sum; cin >> sum;

    printArray(arr, size);
    cout << "The pair sum of the array is: ";
    pairSum(arr, size, sum);
}