/*
Allocate memory
*/

#include <iostream>
#include <string>
using namespace std;

class Animal
{
private:
  string name;
public:
  Animal()
  {
  cout<<"Animal created from constructor"<<endl;
  }
  
  ~Animal()
  {
  cout<<"Animal created from deconstructor"<<endl;
  }
  
  //copy constructor
 Animal(const Animal&other): name(other.name){
  cout<<"Animal created from copied constructor"<<endl;
  }
  
  void setName(string name)
  {
  this->name=name;
  }
  
  void speak() const{
  cout<<"My name is:"<<name<<endl;
  }
};

/*
Use pointer
Animal *pAnimal=new Animal;
delete Animal;

Use premete type
int *pInt = new Int;
*pInt=8;
*/

int main()
{
//allocate the entire array
Animal *pAnimal= new Animal[10]; //how many objects, how many animals created
pAnimal[5].setName("Geogre"); //allocate the index 5

pAnimal[5].speak();
//when free memory, put []Animal
delete [] pAnimal;

char *pMen= new char[1000]; //char is one byte, allocated 1000 bytes;
delete []pMen;
  char c='a';
  string name(5, c);//5 characters of the string
  //char is basically an integer type
  cout<<name<<endl;
return 0;
}
