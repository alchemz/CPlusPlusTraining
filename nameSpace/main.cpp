#include<iostream>
#include "Cat.h"
#include "Animal.h"
using namespace std;
using namespace cats;
using namespace xlz;
int main()
{
  Cat cat;
  cat.speak();
  
  xlz::Cat cat2;
  cat2.speak();
  
  cats::Cat cat3;
  cat3.speak();
  
  return 0;
}
