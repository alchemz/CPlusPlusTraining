#include <iostream>
#include "Cat.h"
using namespace std;

void CAT::speak()
{
  if(happy)
  {
  cout<<"Meouw\n";
  }else{
  cout<<"SSSS\n";
  }
}

CAT::Cat()
{
cout<<"Cat created"<<endl;
happy=true;
}
