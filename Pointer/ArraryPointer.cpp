/*
Pointer type of array
1. create a string array
2. create a pointer
3. for loop to print out each elements of the array
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string text[] = { "Jan","Jan 10", "Jan 20" };
	string *p = text;

	for (int i = 0; i<sizeof(text) / sizeof(string); i++, p++)
	{
		cout << text[i] << " ";
		//cout << *p;
	}

	cout << endl;

	for (int i = 0; i < sizeof(text) / sizeof(string); i++, p++)
	{
	cout << *p << " ";
	}


	//third method
	//user pointer to point at the first and end pointer
	string *pElement = &text[0];
	string *pEnd = &text[sizeof(text) / sizeof(string) - 1];

	while (true)
	{
		cout << *pElement << " ";

		if (*pElement == *pEnd)
		{
			break;
		}

		*pElement++;//move the pointer to the next
	}

	return 0;

}
