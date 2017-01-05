//overloading constructor

//main.cpp

#include <iostream>
#include<sstream>
#include "Person.h"
using namespace std;

int main()
{
	Person person;
	cout<<person.toString();

	Person person1("John");
	cout << person1.toString();

	Person person2("Peter", 20);
	cout << person2.toString();
	return 0;
}
