#include <iostream>
using namespace std;

int reverse(int arr[], int size){
   int start = 0, end = size - 1;

   while(start <= end){
      swap(arr[start], arr[end]);
      start++; end--;
   }
}

void printArray(int arr[], int size){
   for (int i = 0; i < size; i++){
      cout << arr[i] << " ";
   }
   cout << endl;
}

int main(){
   cout << "Enter the size of the array: " << endl;

   int size;
   cin >> size;

   cout << "Enter the elements of the array: " << endl;

   int arr[1000];
   for ( int i = 0; i < size; i++){
      cin >> arr[i];
   }

   reverse(arr, size);
   printArray(arr, size);
}