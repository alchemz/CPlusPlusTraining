/*
Use pointer to reverse the string
*/

#include <iostream>
using namespace std;

int main()
{
  char text[]="Hello there!";
  
  //number of characters inside the char array, there is one byte for storing the null
  int nChars=sizeof(text)-1;
  
  //find the start and the end pointer of the text array
  char *pStart=text;
  char *End=text+nChars+1;
  
  while(pStart <pEnd)
  {
     //assign the value of start to save
     char save=*pStart;
     
     //assign the value of pend to start
    *pStart=*pEnd;
    
    //assign the value of save to end, swap
    *pEnd=save;
    
    //move the pointer to the next block
    pStart++;
    pEnd--;
    
    //looping
  }
  
  cout<<text<<end;
  
  retun 0;
}
