#include<iostream>
using namespace std;
string numbers[]={"one","two","three"};
void show1(const int nElements, string texts[2])
{
for(int i=0; u<nElements; i++)
{
cout<<texts[i]<<endl;
}
}

void show2(const int nElements, string *texts)
{
for(int i; i<nElements;i++)
{
cout<<texts[i]<<endl;
}
}

void show3(string (&texts)[3])
{
for(int i; i<sizeof(texts)/sizeof(string);i++)
{
cout<<texts[i]<<endl;
}
}

string *getArray()
{
//do not return pointer to local variable
//string texts[]={"one","two","three"};
return numbers;
}

char *getMemory()
{
char *pMem= new char[100];
return pMem;

}

void freeMemory(char *pMen)
{
delete []pMen;

}
int main()
{
string texts[]={"apple","orange","banana"};
cout<<sizeof(texts)<<endl;
show2(3,texts);
show3(texts);

char *pMemory=getMemory();
delete [] pMemory;

freeMemory(pMemory);

return 0;
}
