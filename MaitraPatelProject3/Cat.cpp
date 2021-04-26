#include <iostream>
#include <string>
#include "Cat.h"
using namespace std;

Cat::Cat()
{
	type = "domestic";
}
Cat::Cat(string x)
{
	type = x;
}
Cat::Cat(Cat &x) : Mammal(x)
{
	type = x.type;
}
Cat::~Cat()
{
	type = "domestic";
}
void Cat::sound()
{
	cout << "Mew" << endl;
}
void Cat::setType(string x)
{
	type = x;
}
string Cat::displayType()
{
	return type;
}
