#include <iostream>
#include "Cat.h"

using namespace std;
void Cat::speak()
{
    cout<<"Meouw\n"<<endl;
}

void Cat::makeHappy()
{
    happy=true;
}

void Cat::makeSad()
{
    happy=false;
}
