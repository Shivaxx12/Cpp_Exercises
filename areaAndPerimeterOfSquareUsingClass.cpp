#include <stdio.h>
#include <iostream>
using namespace std;
//Code by Shivaksh Sharma - 2110992079
class square{
    protected:
    float side;
    public:
    square(float s){
        side = s;
    }
    void area(){
        float a = side*side;
        cout<<a<<endl;
    }
    void perimeter(){
        float p = side*4;
        cout<<p<<endl;
    }
};
int main()
{
    square s(10);
    s.perimeter();
    s.area();
    return 0;
}
