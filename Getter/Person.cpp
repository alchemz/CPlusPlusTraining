#include <iostream>
#include "Person.h"

using namespace std;

PERSON_NAME::PERSON_NAME()
{
	name = "Ling";
}
string PERSON_NAME::getName()
{
	return name;
}

string PERSON_NAME::toString()
{
	return "This person's name is" + name;
}

void PERSON_NAME::setName(string newName)
{
	name = newName;
}
