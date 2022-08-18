#include<iostream>
using namespace std;
int main() {
   int x = 3, y, z;
   cout << x << endl;
   y = x++;
   cout << x << endl;
   z = ++x;
   cout << x << ", " << y << ", " << z;
   return 0;
}