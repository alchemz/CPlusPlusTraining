#include <iostream>
#include <string>

using namespace std;

int main()
{

	string password;

	cout << "Enter the password" << endl;
	cin >> password;

	if (password == "3018")
	{
		cout << "door opened" << endl;
	}
	else
	{
		cout << "You have entered the wrong password\n";
	}
	return 0;
}
