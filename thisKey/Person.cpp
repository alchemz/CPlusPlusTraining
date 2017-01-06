#include <iostream>
#include "Person.h"
#include <sstream>

/*
Person::Person()
{
	//this->name = name;
	//this->age = age;
	name = "ling";
		age = 10;
}
*/

Person::Person(string name, int age)
{
	this->name = name;
	this->age = age;
}

string Person::toString()
{
	stringstream ss;
	ss << name;
	ss << age;
		return ss.str();
}

