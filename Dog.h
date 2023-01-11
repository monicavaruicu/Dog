#pragma once
#include <iostream>

class Dog
{
public:
	Dog();
	Dog(std::string myName, double myHeight, double myWeight, int myAge, std::string myColor);
	~Dog();
	void virtual printDogDetails();
	void virtual addDog();

protected:
	std::string name;
	double height;
	double weight;
	int age;
	std::string color;
};

