#include <iostream>
using namespace std;

int getLength(char string[]){
    int count = 0;
    for(int i = 0; string[i] != '\0'; i++){
        count++;
    }
    return count;
}


int checkPalin(char string[], int n){
    int s = 0, e = n - 1;
    while(s <= e){
        if(string[s] != string[e]){
            return 0;
        }
        s++; e--;
    }
    return 1;
}

int main(){
    char string[100];
    cout << "Enter string: ";
    cin >> string;
    cout << string << endl << "Length: " << getLength(string) << endl;
    int n = getLength(string);
    cout << checkPalin(string, n);
}