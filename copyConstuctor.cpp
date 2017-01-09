#include <iostream>
#include <string>
using namespace std;

class Animal {
private:
	string name;
public:
	Animal() { cout << "1 Animal created" << endl; };
	Animal(const Animal& other) :name(other.name) { cout << "2 Animal created by copy" << endl; };
	void setName(string name) { this->name = name; };
	void speak() const {
		cout << "My name is " << name << endl;
	}
};

int main() {
	Animal animal1;
	animal1.setName("Freddy");

	Animal animal2;
	animal2.setName("Bob");

	animal1.speak();
	animal2.speak();

	Animal animal3(animal1);
	return 0;
}
