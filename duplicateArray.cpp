#include <iostream>
using namespace std;

int duplicate(int arr[], int size){
   //Using XOR => a ^ a = 0; 0 ^ a = a;   
   int ans = 0;
   for (int i = 0; i < size; i++){
      ans = ans ^ arr[i];
   }
   for (int i = 1; i < size; i++){
      ans = ans ^ i;
   }
   return ans;
}

int main(){
   cout << "Enter the size of the array: ";
   int size; cin >> size;

   cout << "Enter the elements of the array: ";

   int arr[1000];
   for( int i = 0; i < size; i++){
      cin >> arr[i];
   }
   cout << duplicate(arr, size);

}
