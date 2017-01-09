#include <iostream>
using namespace std;

class Test
{
  public:
  //initalization of const must be done right here
  static int const MAX=99; 
  //a static const cannot be changed
  
  
  private:
  int id;
  static int count;
 // static int const MAX=99;
  
  public:
  Test(){
    id=count++;//two kinds of ++, count ++ post fix; ++count pref fix
  }
  
  int getId()
  {
  return id;
  }
  //static access the variable with class
  static void showInfo()
  {
  cout<<count<<endl;
  }
};

//.cpp source
//use :: to access the count through class, not with particular object (static)
int Test::count=0;
//Execise
//Define ad output a public static constant
//Define and output a non-static field;
//Output a static field with a static method
//Try incrementing static int field with postfix and prefix increment operators count++ ++count
//Try assigning object ID based on static count incremented in constructor

int main()
{
  cout<<Test::MAX<<endl;
  
  Test test1; //this cause the constructor to run
  cout<<"Object 1 ID:"<<test1.getId()<<endl;
  
  Test test2;
  cout<<"Object 2 ID:"<<test2.getId()<<endl;
  
  //static method 
  Test::showInfo();
  
  return 0;
}
