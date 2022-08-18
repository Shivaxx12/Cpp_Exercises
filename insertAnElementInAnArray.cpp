#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter number of elements in the Array: ";
    int n;
    cin >> n;
    int arr[n], i, elem;
    cout << "Enter Array Elements: ";
    
    for (i = 0; i < n-1; i++)
        cin>>arr[i];
    cout<<"\nEnter Element to Insert: ";

    cin >> elem;
    arr[i] = elem;
    cout<<"\nThe New Array is:\n";

    for(i=0; i<n; i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
    return 0;
}