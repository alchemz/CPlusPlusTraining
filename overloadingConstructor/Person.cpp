#include "Person.h"
#include <iostream>
#include <sstream>
using namespace std;

//first person
Person::Person()
{
	name = "Lingling";
	age = 0;
}

string Person::toString()
{
	stringstream ss;
	ss << "Name is:";
	ss << name<<endl;
	ss << "Age is:";
	ss << age<<endl;

	return ss.str();
}


Person::Person(string newName)
{
	name = newName;
	age = 10;
}

//third person
Person::Person(string newName, int newAge)
{
	name = newName;
	age = newAge;
}
