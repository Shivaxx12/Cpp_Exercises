#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverseArray(vector<int> v, int size){
    int start = 0, end = size - 1;
    while(start <= end){
        swap(v[start], v[end]);
        start++;
        end--;
    }
}

int main(){
    vector<int> v;
    cout << "Enter the size: ";
    int size; cin >> size;
    for(int i = 0; i < size; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    for(int i = 0; i < size; i++){
        cout << v.at(i) << " ";
    }
    cout << endl;
    //sort(v.begin(),v.end());
    reverseArray(v,size);
    for(int i = 0; i < size; i++){
        cout << v.at(i) << " ";
    }
}