#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

int main()
{
	PERSON_N personName;
	personName.setAName("Ling");
	personName.toString();

	cout << "Name entered is: " << personName.toString() << endl;

	//use get method
	personName.getName();
	cout << "Name entered is: " << personName.getName() << endl;
	return 0;

}
