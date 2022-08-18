#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, cubeRoot;
    
    // Asking for input
    cout << "Enter a number to find cube root: ";
    cin >> n;
    
    // Calculating cube root
    cubeRoot = pow(n, 1.0/3.0);
    
    // Displaying output
    cout << "Cube root of " << n << " is: " << cubeRoot;
    return 0;
}