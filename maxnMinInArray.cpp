#include <bits/stdc++.h>
using namespace std;
//Code By Shivaksh Sharma - 2110992079
int main()
{
    int arr[] = { 1, 45, 54, 71, 76, 12 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\nMin Element = "
         << *min_element(arr, arr + n);
    cout << "\nMax Element = "
         << *max_element(arr, arr + n);
    int &min = *min_element(arr,arr+n );
    int &max = *max_element(arr,arr+n );
    cout<<"\nFinding the Element using address variable";
    cout<<"\nMin Element = "<<min;
    cout<<"\nMax Element = "<<max;
    return 0;
}