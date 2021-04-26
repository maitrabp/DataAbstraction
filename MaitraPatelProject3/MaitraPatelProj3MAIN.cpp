#include "Mammal.h"
#include <iostream>
using namespace std;
#include <string>
#include "Cat.h"
#include "Cattle.h"

int main()
{
	Mammal x;
	cout << "Initial values for x: " << endl;
	cout << "Age = " << x.getAge() << " Weight = " << x.getWeight() << endl;
	x.setAge(10);
	x.setWeight(123);
	cout << "Modified values for x: " << endl;
	cout << "Age = " << x.getAge() << "  Weight = " << x.getWeight() << endl;
	Cattle y("dairy");
	cout << endl << endl;
	cout << "Initial values for y: " << endl;
	cout << "Age = " << y.getAge() << "  Weight = " << y.getWeight() << "  Type = " << y.displayType() << endl;
	y.setAge(12);
	y.setWeight(127);
	y.setType("beef");
	cout << "Modified values for y: " << endl;
	cout << "Age = " << y.getAge() << "  Weight = " << y.getWeight() << "  Type = " << y.displayType() << endl << endl;
	Cat z("wild");
	cout << "Initial values for z: " << endl;
	cout << "Age = " << z.getAge() << "  Weight = " << z.getWeight() << "  Type = " << z.displayType() << endl;
	z.setAge(13);
	z.setWeight(128);
	z.setType("domestic");
	cout << "Modified values for z: " << endl;
	cout << "Age = " << z.getAge() << "  Weight = " << z.getWeight() << "  Type = " << z.displayType() << endl << endl;
	Mammal w(x);
	cout << "Modified values for w: " << endl;
	cout << "Age = " << w.getAge() << "  Weight = " << w.getWeight() << endl;
	w.sound();
	cout << endl << endl;
	Cat v(z);
	cout << "Modified values for v: " << endl;
	cout << "Age = " << v.getAge() << "  Weight = " << v.getWeight() << "  Type = " << v.displayType() << endl;
	v.sound();

	system("pause");
	return 0;
}
