/*Array
array: a list of something
int a[n]: a list of integers
index starting from 0, to n-1
*/


#include <iostream>
using namespace std;

int main()
{
	

	float b[5] = { 1.1,3.2,2.9,5.1,1.6 };
	for (int j = 0; j <=6; j++)
	{
		for(int k=0;k<j;k++)
		{
			if (b[j] > b[j + 1])
			{
				float thre;
				thre = b[j];
				b[j] = b[j + 1];
				b[j + 1] = thre;		

			}
		}
	
		cout << b[j] << " ";
	}
	return 0;

}
