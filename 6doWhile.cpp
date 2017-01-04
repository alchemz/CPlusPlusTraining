/*do while loop
do{}while(condition)
difference: do-while. access the {} at least once before checking the conditions
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{

	const string password = "3018";
	string entered;

	do {
		cout << "Enter the password:" << endl;
		cin >> entered;

		if (entered != password)
		{
			cout << "Access denied\n";
		}
	} while (entered != password);


	/*if (entered == password)
	{
		cout << "Door opened\n";
	}*/

	cout << "Door opened\n";
		return 0;
}
