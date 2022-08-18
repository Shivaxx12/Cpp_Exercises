#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of array :";
    cin >> n;
    cout << "Enter array elements:" << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    cout << "The sum of array is: " << sum;
}
