#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
using namespace std;

class PERSON_N
{
private:
	string name; //declare a variables
public:
	string toString(); //return the string name
	void setAName(string newName); //get the name of string
	
	//use get method 
	string getName();
	PERSON_N();
};

#endif

