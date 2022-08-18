#include <iostream>
using namespace std;

int findUnique(int arr[], int size)
{  /*  Using XOR => a ^ a = 0; a ^ 0 = a;
   size of array, (N = 2*M + 1)  */
  int unq = 0;
  for (int i = 0; i < size; i++){
   unq = unq ^ arr[i];
  }
  return unq; 
}

int main(){

   cout << "Enter the size of the array: ";
   int size; cin >> size;
   
   cout << "Enter the elements of the array: ";
   
   int arr[1000];
   for ( int i = 0; i < size; i++){
      cin >> arr[i];
   }
   
   cout << findUnique(arr, size);
}
