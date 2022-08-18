#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter the number";
    cin >> a;
    if (a % 3 == 0)
    {
        cout << "Divisible by 3";
    }
    else if (a % 7 == 0)
    {
        cout << "Divisible by 7";
    }
    else
    {
        cout << "Number is neither divisible by 3 nor 7.";
    }
}
