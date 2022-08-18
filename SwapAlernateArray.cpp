#include <iostream>
using namespace std;

void printArray(int arr[], int size){
   for ( int i = 0; i < size; i++){
      cout << arr[i] << " ";
   }
}

int swapAlt(int arr[], int size){
   int i = 0;
   int j = 1;
   while (j <= size - 1){
      swap(arr[i], arr[j]);
      i += 2;
      j += 2;
   }
}

int main(){
   cout << "Enter the size of the array: "; 
   
   int size;
   cin >> size;

   cout << "Enter the elements of the array: ";

   int arr[1000];
   for(int i = 0; i < size; i++){
      cin >> arr[i];
   }

   swapAlt(arr, size);
   printArray(arr, size);
}