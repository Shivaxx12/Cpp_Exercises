#include <iostream>
using namespace std;

int main()
{
    int num = 57;
    cout << "\n\n Display the operation of pre and post increment and decrement :\n";
    cout << "--------------------------------------------------------------------\n";
    cout << " The number is : " << num << endl;
    num++; // increase by 1 (post-increment)
    cout << " After post increment by 1 the number is : " << num << endl;
    ++num; // increase by 1 (pre-increment)
    cout << " After pre increment by 1 the number is : " << num << endl;
    num = num + 1; // num is now increased by 1.
    cout << " After increasing by 1 the number is : " << num << endl; // 79
    num--; // decrease by 1 (post-decrement)
    cout << " After post decrement by 1 the number is : " << num << endl;
    --num; // decrease by 1 (pre-decrement)
    cout << " After pre decrement by 1 the number is : " << num << endl;
    num = num - 1; // num is now decreased by 1.
    cout << " After decreasing by 1 the number is : " << num << endl;
    cout << endl;
    return 0;
}
