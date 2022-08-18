#include <iostream>
#include <vector> 
#include<algorithm>
using namespace std;

void printArray(vector<int> v, int size){
    for(int i = 0; i < size; i++){
        cout << v.at(i) << " ";
    }
}
void reverseArray(vector<int> v, int size){
    int start = 0, end = size - 1;
    while(start <= end){
        swap(v[start], v[end]);
        start++;
        end--;
    }
}
int main (){
    vector<int> v;
    cout << "Enter the size of the array: ";
    int size; cin >> size;
    cout << "Enter the elements of the array: ";
    for( int i = 0; i < size; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    printArray(v,size);
    cout << endl;
    //sort(v.begin(), v.end());
    reverseArray(v,size);
    printArray(v,size);
}
