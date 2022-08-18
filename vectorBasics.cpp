#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> a;
    cout << "capacity" << a.capacity() << endl;

    a.push_back(2);
    cout << "capacity" << a.capacity() << endl;

    a.push_back(13);
    cout << "capacity" << a.capacity() << endl;

    a.push_back(3);
    cout << "capacity" << a.capacity() << endl;

    a.push_back(11);
    cout << "capacity" << a.capacity() << endl;

    a.push_back(23);
    cout << "capacity" << a.capacity() << endl;

    cout << "Element at second index -> " << a.at(2) << endl;
    cout << "front -> " << a.front() << endl;
    cout << "back -> " << a.back() << endl;
    
    cout << "before pop " << endl;
    
    for(int i = 0; i < a.size(); i++){
        cout << a.at(i) << " ";
    }

    cout << "after pop: " << endl;
    a.pop_back();
    for(int i = 0; i < a.size(); i++){
        cout << a.at(i) << " ";
    }
    cout << endl << a.size() << endl;
    a.clear();
    cout << a.size() << endl;

    vector<int> last(a);
    for(int i = 0; i < last.size(); i++){
        cout << last.at(i) << " ";
    }

}   

