#include <iostream>
using namespace std;
//Code by shivaksh sharma - 2110992079
class Count
{
private:
    int value;
public:
    Count() : value(5) {}
    void operator++()
    {
        ++value;
    }
    void display()
    {
        cout << "Count: " << value << endl;
    }
};
int main()
{
    Count count1;
    ++count1;
    count1.display();
    return 0;
}
