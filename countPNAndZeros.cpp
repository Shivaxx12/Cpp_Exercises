#include <iostream>
using namespace std;
//Code by Shivaksh Sharma - 2110992079
int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int pos = 0, neg = 0, zer = 0, i, arr[n];
    cout << "Enter Elements of array: ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            pos++;
        else if (arr[i] == 0)
            zer++;
        else
            neg++;
    }
    cout << "\nFrequency of Positive Numbers: " << pos;
    cout << "\nFrequency of Zero: " << zer;
    cout << "\nFrequency of Negative Numbers: " << neg;
    cout << endl;
    return 0;
}
