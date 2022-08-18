#include <iostream>
using namespace std;

int main(){
    char temp = 'z';
    //cout << "&temp=> " << &temp << endl;
    char *c = &temp;
    cout << "c=> " << c;
}