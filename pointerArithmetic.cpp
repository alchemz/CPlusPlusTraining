/*

*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string texts[] = { "one", "two", "three","four" };
	int sizeofArray = sizeof(texts) / sizeof(string);
	string *pTexts = texts;

	string *Element = &texts[0];
	string *End = &texts[sizeofArray];

	while (Element != End) //the address of the element
	{
		cout << *Element<<" ";
		Element++;
	}
	cout << endl;

	//let the pointer point to the next 3 block
	//*p is for print out the value
	cout << *(pTexts + 3);
	return 0;
}
