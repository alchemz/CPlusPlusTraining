#include<iostream>
#include<string>
using namespace std;

class Frog
{
private:
	string name;
private:
	string getName() { return name; } //hide as many as info as possible

public:
	Frog(string name) :name(name) {}
	void info()
	{
		//call the private function here instead
		cout << "My name is:" << getName() << endl;
	}
};

int main()
{
	Frog frog("Freddy");
	frog.info();
	return 0;
}
