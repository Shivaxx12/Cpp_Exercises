#include <iostream>
using namespace std;

bool search(int arr[], int size, int key){
   for(int i = 0; i < size; i++){
      if (arr[i] == key){
         return 1; //return 1 so that the bool value is true
      }
   }
   return 0;
}

int main(){
   cout << "Enter the size of the array: " << endl;
   int size;
   cin >> size;
   cout << "Enter the elements of the array: " << endl;
   int arr[1000];
   for (int i = 0; i < size; i++){
      cin >> arr[i];
   }
   cout << "Enter the element to search for: " << endl;
   int key;
   cin >> key;
   bool found = search(arr, size, key);

   if(found){
      cout << "the key is present" << endl;
   }
   else{
      cout << "the key is absent" << endl;
   }
}