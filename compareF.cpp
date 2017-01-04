/*Comparing float*/

#include <iostream>

using namespace std;

int main()
{
	float value = 1.1;
	if (value == 1.1)
	{
		cout << "equals" << endl;
	}

	else {
		cout << "Not equal\n" << endl;
	}
	//the result is not equal, because we cannot use == to compare float number
  //the best way to do is to compare the difference of different number.
	return 0;
}
