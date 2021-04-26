#include <iostream>
#include <string>
#include "Cattle.h"
using namespace std;

Cattle::Cattle()
{
	type = "beef";
}
Cattle::Cattle(string x)
{
	type = x;
}
Cattle::Cattle(Cattle &x) :Mammal(x)
{
	type = x.type;
}
Cattle::~Cattle()
{
	type = "beef";
}
void Cattle::sound()
{
	cout << "Moo" << endl;
}
void Cattle::setType(string x)
{
	type = x;
}
string Cattle::displayType()
{
	return type;
}
