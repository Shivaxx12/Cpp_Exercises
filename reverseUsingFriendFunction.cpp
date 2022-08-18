#include<iostream>
using namespace std;
//Code by shivaksh sharma - 2110992079
class T4Tutorials
{
	private:
		int n,i;
	public:
		T4Tutorials()
		{
			cout<<"Enter Number to Display reverse: ";
			cin>>n;
		}
		friend void show(T4Tutorials);
};
void show(T4Tutorials r)
{
	 cout<<"The reverse the Entered number: ";
			for(r.i=r.n;r.i>0;r.i=r.i/10)
			{
				cout<<r.i%10;
			}
}
int main()
{
    T4Tutorials r;
    show(r);
}