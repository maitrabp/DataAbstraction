#ifndef CATTLE_H
#define CATTLE_H
#include <string>
#include "Mammal.h"
using namespace std;
class Cattle : public Mammal
{
public:
	Cattle();
	Cattle(string);
	Cattle(Cattle&);
	void sound();
	void setType(string);
	string displayType();
	~Cattle();

private:
	string type;
};

#endif !CATTLE_H

