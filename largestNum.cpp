#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cout << "enter a:";
    cin >> a;
    cout << "enter b:";
    cin >> b;
    cout << "enter c:";
    cin >> c;
     cout << "enter d:";
    cin >> d;
    if(a==b && b==c && c==d && d==a){
        cout<<"all are same";
    }
    else if (a > b && a > c)
    {
        cout << a << " is the greatest number";
    }
    else if (b > a && b > c)
    {
        cout << b << " is the greatest number";
    }
    else if (c > a && c > b)
    {
        cout << c << " is the greatest number";
    }
    else if (d > a && d > b && d > c)
    {
        cout << d << " is the greatest number";
    }
    
}
