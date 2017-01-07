/*Reference to the same address of a variable using &*/

#include <iostream>
using namespace std;

void changeSomething(double &value3);

int main()
{
	int value1 = 8;
	
	//&: value2 is a reference of value 1
	int &value2=value1;
//now value1 and value 2 have the same adress
	//this is nothing to do with pointer
	value2 = 10;
	cout << value1<<endl;

	double value4 = 12.00;
   changeSomething(value4);
   cout << value4;

	return 0;
}

void changeSomething(double &value3)
{
	value3 = 11;
}
