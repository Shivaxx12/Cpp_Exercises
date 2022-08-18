// Writ a program for the following cases: Give age of person as input. Then print priority of covid vaccination according their age. Age< 18 not eligible, Age>60 eligible and highest priority, 18<Age<60 eligible with less priority.
#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age:";
    cin >> age;
    if (age < 18)
    {
        cout << "Not eligible for vaccination";
    }
    else if (age > 18 && age < 60)
    {
        cout << "Less priority for vaccination";
    }
    else
    {
        cout << "Highest priority for vaccination";
    }
    return 0;
}
