#include <iostream>
#include "utils.h"

using namespace std;

//speak() and jump() belongs to the same class utils
void utils::speak()
{
	cout << "Meooow\n";
}

void utils::jump()
{
	cout << "Bouncing,bouncing......\n";
}

//first write the functions inside the utils.cpp with include "utils.h"
//second bond all the functions inside one class, and public it inside utils.h
//third go back to utils.cpp, to add class::function()
//forth main.cpp, delcare the class ClassName;
//Classname.function();
//exit
