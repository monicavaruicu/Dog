#pragma once
#include "Dog.h"
class DogWithoutSpots : virtual public Dog
{
public:
	DogWithoutSpots();
	DogWithoutSpots(std::string myName, double myHeight, double myWeight, int myAge, std::string myColor);
	~DogWithoutSpots();
	void printDogDetails() override;
	void addDog() override;
};

