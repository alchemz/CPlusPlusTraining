/*
first showMenu
second get input
third process the selection
*/

#include <iostream>
using namespace std;

void showMenu()
{
	cout << "1.search" << endl;
	cout << "2.View record" << endl;
	cout << "3. Quit" << endl;
}

int getInput()
{
	cout << "Enter selection" << endl;
	int input;
	cin >> input;

	return input;
}

void processingSelection(int option)
{
	switch (option)
	{
	case 1:
		cout << "Searching...\n";
		break;
	case 2:
		cout << "Viewing...\n";
		break;
	case 3:
		cout << "Quiting...\n";
		break;
	default:
		cout << "Please selection from the menu\n";
	}
}

int main()
{
	showMenu();
	int selection = getInput();
	processingSelection(selection);

	return 0;

}
