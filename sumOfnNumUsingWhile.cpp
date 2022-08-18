#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter number till which you would like to add";
    cin >> n;
    while (n > 0)
    {
        sum += n;
        n--;
    }
    cout << "\n sum is:" << sum;
    return 0;
}
