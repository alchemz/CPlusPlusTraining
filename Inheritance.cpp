//
#include <iostream>
using namespace std;

class Animal{
public:
    void speak()
    {
    cout<<"Grrrr"<<endl;
    }
};
//a new class with more functions
//I do not understand why do not we just change the original class
//why do we need to create another class
//Cat is a subclass of Animal
//Animal is a superclass of Cat
class Cat:public Animal{
public:
    void jump()
    {
    cout<<"Cat jumping"<<endl;
    }
};

//Tiger is a subclass of cat
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
