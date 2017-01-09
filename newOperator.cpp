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
