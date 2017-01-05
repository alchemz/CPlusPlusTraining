#include <iostream>
#include "Cat.h"
using namespace std;

void CAT::speak()
{
    if(happy)
    {
    cout<<"Meouw...\n";
    }else
    {
    cout<<"Ssss...\n";
    }
}

CAT::CAT()
{
cout<<"Cat created\n";
happy=true;
}

CAT::~CAT()
{
cout<<"Cat destoryed";
}
