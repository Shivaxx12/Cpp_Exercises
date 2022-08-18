#include <iostream>
using namespace std;
//Code by shivaksh sharma - 2110992079
struct employee
{
    int ID;
    char name[50];
    int salary;
};
int main()
{
    struct employee emp[3] = {{1, "Harry", 20000,}, {2, "Sally", 50000,}, {3, "John", 15000,}};
    cout << "The employee information is given as follows:" << endl;
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Employee ID: " << emp[i].ID << endl;
        cout << "Name: " << emp[i].name << endl;
        cout << "Salary: " << emp[i].salary << endl;
        cout << endl;
    }
    return 0;
}
