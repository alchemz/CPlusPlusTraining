#include <iostream>
#include "Person.h"

using namespace std;

string PERSON_N::toString()
{
	return "This person's name is:"+name;
}

void PERSON_N::setAName(string newName)
{
	name = newName;
}


//use get method
PERSON_N::PERSON_N()
{
	name = "HH";
}

string PERSON_N::getName()
{
	return name;
}
