/*
New operator allocate memory for a single class
we can use pointer with bracket
(*pCat1).setName();
(*pCat1).speak();

or
pCat1->SetName();
pCat1->speak();

//when allocate memory , you need to free memory later
*/
#include<iostream>
#include <string>
using namespace std;

class Animal{
private:
    string name;
public:
    Animal(){
    cout<<"Animal created."<<endl;
   }
   
   Animal(const Animal& other): name(other.name)
   {
   cout<<"Animal created by copying"<<endl;
   }
   
   ~Animal()
   {
   cout<<"Destructor called"<<endl;
   }
   
   void setName()
   {
   this->name=name;
   }
   
   void speak() const{
   cout<<"my name is:" <<name<<endl;
  }
};

int main()
{     
    Animal *pCat1= new Animal();
    pCat1 -> setName("Freddy");
    pCat2->　speak();
    
    cout<<sizeof(pCat1)<<endl;
    return 0;
}
