/*
string streams: Use a string buffer contrains a sequence of characters.
it can turn everything into a single string
#include <sstream> for using sstream variables
stringstream ss;
ss.str();
*/

#include <iostream>
#include <sstream>

using namespace std;

int main()
{

	string name = "Brady";
	int age = 21;

	stringstream ss;
	ss << "The name is: ";
	ss << name;
	ss << "The age is: ";
	ss << age;

	string info = ss.str();

	cout << info;
}
