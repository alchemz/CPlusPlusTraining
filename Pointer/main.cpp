/*
a variable store the address of bucket
int nValue; //initialize the integer
int* pnValue; //initialize a pointer
pnValue =&nValue;//point to the address of nValue
cout<<*pnValue;//print the value of the pointer
*/
#include <iostream>
using namespace std;

void manipulate(double *na);

int main() {
	double value = 8;
	double* pnValue;
	pnValue = &value;
	*pnValue = 10;
	
	manipulate(pnValue);

	return 0;
}

void manipulate(double *na)
{
	cout << "The double value via the pointer:" << *na<<endl;
	cout << "The address of the value is:" << &na;
}
