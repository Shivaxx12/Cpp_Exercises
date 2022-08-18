#include<iostream>
using namespace std;

int main()
{
	int number;
	
	cout << "\nPlease Enter Integer Value to print Natural Numbers =  ";
	cin >> number;
	
	cout << "\nList of Natural Numbers from 1 to " << number << " are\n"; 
	for(int i = 1; i <= number; i++)
  	{
		cout << i <<" ";
  	}
		
 	return 0;
}