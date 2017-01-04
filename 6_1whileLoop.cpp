#include <iostream>
#include <string>

using namespace std;


int main()
{
	const string password="3018";
	string enteredValue;
	cout << "Enter the password: " << endl;
	cin >> enteredValue;

	
	while (enteredValue !=password)
	{
		cout <<"Access denied\n"<< "Enter the password:" << endl;
		cin >> enteredValue;
	}

	if (enteredValue == password)
	{
		cout << "Door opened" << endl;
	}

	return 0;
}
