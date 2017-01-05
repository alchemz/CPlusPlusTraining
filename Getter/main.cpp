#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

int main()
{
	PERSON_NAME person;
	cout << "The person's name is:"<<person.getName()<<endl;

	person.setName("Lily's new name");
	person.toString();
	cout << person.toString() << endl;

}
