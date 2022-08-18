#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v;
    cout << "Enter the size of the array: ";
    int size; cin >> size;
    cout << "Enter the elements of the array: ";
    for( int i = 0; i < size; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    cout << "Enter the number to search for: ";
    int n; cin >> n;
    bool x = binary_search(v.begin(), v.end(), n);
    if(x){
        cout << "The element is present";
    }
    else{
        cout << "Element is missing";
    }
    
}