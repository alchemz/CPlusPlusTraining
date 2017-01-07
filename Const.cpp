//const int *pVlaue =&value
//we cannot change the int value
//int * const pValue
//a constant pointer, we cannot change the pointer
//read from left to right

#include <iostream>
using namespace std;

int main()
{

const int *pValue;
int value=8;
*pValue=value;//error, we cannot change the value;

int const *ppValue;
ppValue=&vlaue; //error, we cannot change the pointer
}
