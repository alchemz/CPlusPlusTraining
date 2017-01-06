/*
name= newName; //these two lines are equal
this->name=name;

this//a pointer variable pointing to the memory location of the object
*/
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
	string toString();
	Person(string name, int age);
};

#endif
