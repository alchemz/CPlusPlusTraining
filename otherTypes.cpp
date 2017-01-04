#include <iostream>

using namespace std;

int main()
{
	bool bvalue = true;
	cout << bvalue<<endl;
	
	char cvalue = 55;//take one byte 
	cout << cvalue << endl; //the result is 7, it is a character
	//char cvalue ='55';
	//cout << cvalue << endl; //the result is 5 (-128 127)
	cout <<"The size of char is:"<< sizeof(char)<<endl;
	wchar_t wValue='ii'; //store more digits and value than char

	cout << "The size of wchar_t is" << sizeof(wchar_t) <<"\n"<< wValue << endl;
	return 0;
}
