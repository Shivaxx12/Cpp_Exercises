#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<int> deq;
    deq.push_back(3);
    deq.push_front(12);
    for(int i = 0; i < deq.size(); i++){
        cout << deq.at(i) << " ";
    }
    cout << endl; 
    deq.pop_front();
    for(int i = 0; i < deq.size(); i++){
        cout << deq.at(i) << " ";
    }
}