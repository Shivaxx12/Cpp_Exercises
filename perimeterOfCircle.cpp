#include <iostream>
using namespace std;
  
#define PI 3.141
  
int main(){
    float radius, circumference;
    cout << "Enter radius of circle\n";
    cin >> radius;
    // Circumference of Circle = 2 X PI x Radius
    circumference = 2*PI*radius;
    cout << "Circumference of circle : " << circumference;
      
    return 0;
}