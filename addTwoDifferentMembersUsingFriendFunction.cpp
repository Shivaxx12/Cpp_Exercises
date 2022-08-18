#include <iostream>
using namespace std;
//Code by shivaksh sharma - 2110992079
class ClassB;
class ClassA {
    public:
        ClassA() : numA(12) {}
    private:
        int numA;
         friend int add(ClassA, ClassB);
};
class ClassB {
    public:
        ClassB() : numB(1) {}
    private:
        int numB;
        friend int add(ClassA, ClassB);
};
int add(ClassA objectA, ClassB objectB) {
    return (objectA.numA + objectB.numB);
}
int main() {
    ClassA objectA;
    ClassB objectB;
    cout << "Sum: " << add(objectA, objectB);
    return 0;
}
