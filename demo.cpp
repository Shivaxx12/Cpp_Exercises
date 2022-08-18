#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

int first (int arr[], int size, int elem){
    int start = 0, end = size - 1, mid = start + (end - start)/2; 
    int ans = 0;
    while( start <= end){
        if(arr[mid] == elem){
            ans = mid;
            end = mid - 1;        
        }

        else if(elem < arr[mid]){
            end = mid - 1;
        }

        else if (elem > arr[mid]){
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int last (int arr[], int size, int elem){
    int start = 0, end = size - 1, mid = start + (end - start)/2;
    int ans = 0;
    while(start <= end){
        if(arr[mid] == elem){
            ans = mid;
            start = mid + 1;       
        }

        else if(elem < arr[mid]){
            end = mid - 1;
        }

        else if (elem > arr[mid]){
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main(){
    
    cout << "Enter the size of the array: " << endl;
    int size; cin >> size;
    
    cout << "Enter the elements of the array: " << endl;
    int arr[5];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    cout << "Enter the element to search for: ";
    int elem; cin >> elem;

    printArray(arr, size);
    cout << endl;
    
    cout << "First occurence of the element is: " << first(arr, size, elem) << endl;
    
    cout << "Last occurence of the element is: " << last(arr, size, elem) << endl;

}
