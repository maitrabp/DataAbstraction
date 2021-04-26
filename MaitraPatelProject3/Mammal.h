#ifndef MAMMAL_H
#define MAMMAL_H

class Mammal
{
public:
	Mammal();
	Mammal(const Mammal &x);
	void setAge(int);
	void setWeight(float);
	int getAge();
	float getWeight();
	void sound();
	~Mammal();

private:
	int mammalAge;
	float mammalWeight;

};

#endif !MAMMAL_H
#pragma once
