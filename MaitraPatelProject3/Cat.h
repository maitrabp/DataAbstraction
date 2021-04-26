#ifndef CAT_H
#define CAT_H
#include <string>
#include "Mammal.h"
using namespace std;
class Cat : public Mammal
{
public:
	Cat();
	Cat(string);
	Cat(Cat&);
	void sound();
	void setType(string);
	string displayType();
	~Cat();

private:
	string type;
};

#endif !CATTLE_H

