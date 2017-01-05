#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class PERSON_NAME
{
private: 
	string name;
public:
	//use get method
	PERSON_NAME();
	string getName();
	void setName(string newName);
	string toString();
};

#endif

