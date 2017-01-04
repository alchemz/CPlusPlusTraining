#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[])
{
	int num[10] = { 18,-10,2,4,6,-12,-8,-6,13,-1 };
	int temp;

	cout << "Ascending Sort : \n\n";

	for (int i = 0; i <= 10; i++)
	{
		for (int j = i + 1; j <= 10; j++)
		{
			if (num[i]>num[j])
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
		cout << num[i] << "\n";
	}

	cout << "\nDescending Sort : \n\n";

	for (int i = 0; i <= 10; i++)
	{
		for (int j = i + 1; j <= 10; j++)
		{
			if (num[i]<num[j])
			{
				temp = num[j];
				num[j] = num[i];
				num[i] = temp;
			}
		}
		cout << num[i] << "\n";
	}

	return 0;
}
