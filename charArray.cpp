/*
char type for storing characters
an array of char
char text[]={'h','e','l'};
Q: what is the difference between char array and string array
Hello will be store as h e l l o
*/

#include <iostream>
using namespace std;

int main()
{
char texts[]="HELLO";
for(int i; i<sizeof(text);i++)
{
cout<<i<<": "<<text[i]<<endl;
}

int k=0;
while(true)
{
if(text[k]==0)
{
break;
}

cout<<text[k];
}

return 0;
}
