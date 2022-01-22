#include <iostream>
using namespace std;
int main() {
	int n;
	int num1 = 0;
	int num2 = 1;
	int fllwngnum = 0;
	cout<<"Enter a number: ";
	cin>>n;
	cout<<"The first "<<n<<" numbers of the Fibonacci Sequence: ";
	for(int x= 1; x <= n ; x++)
	{
		if( x == 1)
		{
			cout<<num1<<", ";
			continue;
		}
		if(x==2)
		{
			cout<<num2<<", ";
			continue;
		}
		fllwngnum = num1 + num2;
		num1 = num2;
		num2 = fllwngnum;
		cout<<fllwngnum<<", ";
	}
return 0;
} 