#include <iostream>
using namespace std;

class Animal{
public:
    void speak()
    {
    cout<<"Grrrr"<<endl;
    }
};

class Cat:public Animal{
public:
    void jump()
    {
    cout<<"Cat jumping"<<endl;
    }
};

public Tiger:public Cat
{
public:
    void attackAntep()
    {
    cout<<"Attacking"<<endl;
    }
};

int main()
{
   Animal a;
   a.speak();
   
   Cat cat;
   cat.speak();
   cat.jump();
   
   Tiger tiger;
   tiger.jump();
   tiger.speak();
   tiger.attackAntep();
   
   return 0;
}
