#include <iostream>
using namespace std;
//Code by Shivaksh Sharma - 2110992079
void decToOctal(int n)
{
    int octalNum[100];
    int i = 0;
    while (n != 0) {
        octalNum[i] = n % 8;
        n = n / 8;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        cout << octalNum[j];
}
int main()
{
    int n = 33;
    decToOctal(n);
    return 0;
}