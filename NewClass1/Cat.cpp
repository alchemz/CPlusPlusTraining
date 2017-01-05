#include <iostream>
#include "Cat.h"

using namespace std;
void Cat::speak()
{
    if(happy)
    {
    cout<<"Meouw\n"<<endl;
    }else{
    cout<<"SSS\n"<<endl;
    }
}

void Cat::makeHappy()
{
    happy=true;
}

void Cat::makeSad()
{
    happy=false;
}
