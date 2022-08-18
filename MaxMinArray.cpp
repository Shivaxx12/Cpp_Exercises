#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getMax(int arr[], int size){
   int max = INT_MIN;

   for (int i = 0; i < size; i++){
      if(arr[i] > max){
         max = arr[i];
      }
   }
   return max;
}

int getMin(int arr[], int size){
   int min = INT_MAX;

   for(int i = 0; i < size; i++){
      if(arr[i] < min){
         min = arr[i];
      }
   }
   return min;
}

int main(){
   cout << "Enter the size of the Array: ";
   int size;
   cin >> size;

   cout << "Enter the elements in the array: ";
   int arr[1000];
   for(int i = 0; i < size; i++){
      cin >> arr[i];
   }

   cout << "Maximum value is: " << getMax(arr, size) << endl;
   cout << "Minimum value is: " << getMin(arr, size) << endl;
}