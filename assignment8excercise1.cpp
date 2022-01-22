#include <iostream>
using namespace std;
int main() {
	int a;
	int b;
	cout<<"Enter the integer value to be stored in integer variable a: ";
	cin>>a;
	cout<<"Enter the integer value to be stored in integer variable b: ";
	cin>>b;
	int *ptrA = &a;
	int *ptrB = &b;

	cout<<"Integer value a stored in ptrA: "<<*ptrA<<endl;
	cout<<"Address of ptrA "<<ptrA<<endl;
	cout<<"Integre value of b stored in ptrA: "<<*ptrB<<endl;
	cout<<"Address of ptrB "<<ptrB<<endl;
} 