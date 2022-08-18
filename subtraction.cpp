#include <iostream>
using namespace std;

int main()
{
   int firstNumber, secondNumber, sub;

   cout << "Enter two numbers to subtract\n";
    // taking input
   cin >> firstNumber >> secondNumber;

    // subtracting the two numbers
   sub = firstNumber - secondNumber;

   // displaying the output
   cout <<"The subtraction of two numbers is: " << sub << endl;
   return 0;
}