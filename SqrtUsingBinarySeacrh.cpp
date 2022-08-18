#include <iostream>
using namespace std;

int sqrt(int num){
    int start = 0, end = num, mid = start + (end - start)/2, ans = -1;
    while(start <= end){
        int square = mid*mid;
        if(square == num){
            return mid;
        }
        else if(square < num){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int main(){
cout << "Enter the number to find the root of: ";
int num; cin >> num;

cout << "Sqrt is: " << sqrt(num);
}