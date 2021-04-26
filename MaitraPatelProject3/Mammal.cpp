#include <iostream>
#include "Mammal.h"
using namespace std;


//Constructer
Mammal::Mammal()
{
	mammalAge = 0;
	mammalWeight = 0;
}
//Copy constructor
Mammal::Mammal(const Mammal &x)
{
	mammalAge = x.mammalAge;
	mammalWeight = x.mammalWeight;
}
//Destructor
Mammal::~Mammal()
{
	mammalAge = 0;
	mammalWeight = 0;
}
//Sets mammal's age
void Mammal::setAge(int x)
{
	mammalAge = x;
}
//Sets mammal's weight
void Mammal::setWeight(float x)
{
	mammalWeight = x;
}
int Mammal::getAge()
{
	return mammalAge;
}
float Mammal::getWeight()
{
	return mammalWeight;
}
void Mammal::sound()
{
	cout << "Generic sound" << endl;
}

