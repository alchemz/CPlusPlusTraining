#include <iostream>
#include <string>

using namespace std;

class Animal{
private:
    string name:
public:
    Animal()
    {
    cout<<"Animal from constructor created"<<end;
    }
    
    ~Animal()
    {
    cout<<"Animal from deconstructor created"<<endl;
    }
    
    Animal(const Animal& other): name(other.name)
    {
        cout<<"Animal created by copying"<<endl;
    }
    
    //setName function
    void setName(string name)
    {
    this->name=name;
    }
    
    void speak() const{
    cout<<"My name is: "<<name<<endl;
    }
};

//use the pointer to allocate the memory
Animal *createAnimal(){
    Animal *pAnimal = new Animal();
    pAnimal->setName("Bertie");
    return pAnimal;
}

int main()
{
    Animal *pFrog = createAnimal();
    pFrog->speak();
    delete pFrog;
    return 0;
}
