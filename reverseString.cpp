#include <iostream>
using namespace std;

int main() {
	
	char text[] = "hello";

	//number of characters inside the char array, there is one byte for sorting the null
	int nChars = sizeof(text) - 1;

	//find the start and end pointer of the text array
	char *pStart = text;
	char *pEnd = text + nChars - 1;

	//while(pStart != pEnd)
	while (pStart < pEnd)
	{
		//assign the value of start to save
		char save = *pStart;

		//assign the value of pend to start
		*pStart = *pEnd;

		//assign the value of save to end, swap
		*pEnd = save;

		//move the pointer to next block
		pStart++;
		pEnd--;

		//looping
	}
	
	cout << "The start is: " << pStart << endl;
	cout << "The end is: " << pEnd << endl;
	cout << text << endl;
	return 0;
}
