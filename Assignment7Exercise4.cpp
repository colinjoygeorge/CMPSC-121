#include <iostream>
using namespace std;
int main() {
	int x;
	int factors = 1;
	cout<<"Enter number: ";
	cin>>x;
	for(int i = 1; i <= x ; i++)
	{
		factors = factors*i;
	}
	cout<<"Factorial of the nuber "<<x<<" is "<<factors<<endl;
	return 0;
} 