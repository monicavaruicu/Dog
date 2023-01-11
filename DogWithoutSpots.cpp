#include "DogWithoutSpots.h"

DogWithoutSpots::DogWithoutSpots()
{

}

DogWithoutSpots::DogWithoutSpots(std::string myName, double myHeight, double myWeight, int myAge, std::string myColor) :
	Dog(myName, myHeight, myWeight, myAge, myColor)
{

}

DogWithoutSpots::~DogWithoutSpots()
{

}

void DogWithoutSpots::printDogDetails()
{
	std::cout << "Dog without spots: " << "\n";
	std::cout << "Name: " << name << "\n";
	std::cout << "Height: " << height << "\n";
	std::cout << "Weight: " << weight << "\n";
	std::cout << "Age: " << age << "\n";
	std::cout << "Color: " << color << "\n";
	std::cout << "\n";
}

void DogWithoutSpots::addDog()
{
	std::string MyName;
	double myHeight;
	double myWeight;
	int myAge;
	std::string myColor;

	std::cout << "Dog without spots: " << "\n";
	std::cout << "Name: "; std::cin >> MyName;
	std::cout << "Height: "; std::cin >> myHeight;
	std::cout << "Weight: "; std::cin >> myWeight;
	std::cout << "Age: "; std::cin >> myAge;
	std::cout << "Color: "; std::cin >> myColor;
	std::cout << "\n";

	name = MyName;
	height = myHeight;
	weight = myWeight;
	age = myAge;
	color = myColor;
}