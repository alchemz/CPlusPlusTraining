#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

int main()
{
	Person personInfo("Ling",11);
	cout << personInfo.toString()<< endl;
	return 0;
}
