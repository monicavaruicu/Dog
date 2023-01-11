#pragma once
#include "Dog.h"

class DogWithSpots : virtual public Dog
{
public:
	DogWithSpots();
	DogWithSpots(std::string myName, double myHeight, double myWeight, int myAge, std::string myColor, int myNoOfSpots);
	~DogWithSpots();
	void printDogDetails() override;
	void addDog() override;

protected:
	int noOfSpots;
};

