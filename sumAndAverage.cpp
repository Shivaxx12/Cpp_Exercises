#include <iostream>
using namespace std;
//Code by Shivaksh Sharma - 2110992079
int main()
{
    int i, n;
    double sum=0, average=0;
    cout << "\n\nEnter the number integers you want in an array: ";
    cin >> n;
    int arr[n];
    cout << "\n\n Enter " << n << " integers into an array :\n\n";
    for (i = 0; i < n; i++)
    {
        cout << " Enter arr [ " << i << " ] : ";
        cin >> arr[i];
    }
    cout << "\n\n The Elements of the Array are: \n\n";
    for (i = 0; i < n; i++)
    {
        cout << " arr [ " << i << " ] = " << arr[i] << endl;
        sum += arr[i];
    }
    average = sum/n;
    cout << "\n\n The Sum of the Elements of the Array is : " << sum << "\n\n";
    cout << "\n\n The Average of the Elements of the Array is : " << average << "\n\n";
    cout << "\n\n";
    return 0;
}