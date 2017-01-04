#include <iostream>
#include <string>
#include <limits>
#include <iomanip>

//string charatcters
//with string include is must have 
using namespace std;

int main()
{
	float flvalue=2.3333;
	cout << fixed << flvalue << endl;
	cout << scientific<< flvalue << endl;
	cout << "The size of float is " << sizeof(float) << endl; //4, 8 digits
	cout << "The size of string is " << sizeof(string) << endl;
	//float has 8 significant digits
	cout << setprecision(20) << flvalue << endl;
	cout << "The size of double is " << sizeof(double) << endl;//8, 16 digits
	return 0;
}
