#include<iostream>
using namespace std;

void reverseString(char rev[], int n){
    int s = 0, e = n - 1;
    while(s < e){
        swap(rev[s],rev[e]);
        s++; e--;
    }
}

int getLength(char rev[]){
    int count = 0;
    for(int i = 0; rev[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main(){
    char rev[20];
    cout << "Enter string: ";
    cin >> rev;
    int n = getLength(rev);
    cout << rev << endl;
    cout << "length: " << getLength(rev) << endl;
    reverseString(rev, n);
    cout << rev;
}