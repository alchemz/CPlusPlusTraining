#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

class Person
{
private:
	int age;
	string name;

public:
	Person();
	string toString();

	//overloading
	
	Person(string newName);

	Person(string newName, int newAge);

};

#endif
