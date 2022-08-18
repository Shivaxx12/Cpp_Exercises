#include <iostream>
using namespace std;

int addElem(int arr[], int size){
      int sum = 0;
   for (int i =0; i < size; i++){
      sum = sum + arr[i];
   }

   return sum;
}

int main(){
   int arr[1000];
   cout << "Enter the size of the array: ";
   int size;
   cin >> size;
   for (int i = 0; i < size; i++){
      cin >> arr[i];
   }

   cout << "The sum of the array is: " << addElem(arr, size) << endl;
}