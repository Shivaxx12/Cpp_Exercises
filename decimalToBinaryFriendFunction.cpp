#include <iostream>
using namespace std;
//Code by shivaksh sharma - 2110992079
class T4Tutorials_Decimal_Number
{     
    protected:
    		int i=1,j=n,n,  binaryn=0;
    public:
    	T4Tutorials_Decimal_Number()
    	{
    		cout<<" enter  Decimal  Number :";
		    cin>>n;
		    for(j=n;j>0;j=j/2)
				{
					binaryn=binaryn+(n%2)*i;
					i=i*10;
					n=n/2;
				}
		}
		friend int show(T4Tutorials_Decimal_Number);
	};
	int show(T4Tutorials_Decimal_Number A)
	{
	       	cout<<"binary number ="<<A.binaryn<<endl;
		}
		int main()
		{ 
		  T4Tutorials_Decimal_Number A;
		  show(A);
	}