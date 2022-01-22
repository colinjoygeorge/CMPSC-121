#include <iostream>
using namespace std;
int main() {
	int i;
	int z = 0;

	cout<<"Enter the number of values in the set: ";
	cin>>i;
	cout<<"Enter each vale and press Enter: ";
	int array[i];
	for(int x = 0; x < i; x++)
	{
		cin>>array[x];
	}

	for(int u = 0; u <= i; u++)
	{
		if(array[u]>z)
		{
			z = array[u];
		}
	}
	int *max = &z;
	cout<<"Largest integer value in the set is "<<*max;
	return 0;
} 