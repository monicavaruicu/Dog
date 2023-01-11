#include "DogWithSpots.h"

DogWithSpots::DogWithSpots() : noOfSpots(-1)
{

}

DogWithSpots::DogWithSpots(std::string myName, double myHeight, double myWeight, int myAge, std::string myColor, int myNoOfSpots) :
	Dog(myName, myHeight, myWeight, myAge, myColor), noOfSpots(myNoOfSpots)
{

}

DogWithSpots::~DogWithSpots()
{

}

void DogWithSpots::printDogDetails()
{
	std::cout << "Dog with spots: " << "\n";
	std::cout << "Name: " << name << "\n";
	std::cout << "Height: " << height << "\n";
	std::cout << "Weight: " << weight << "\n";
	std::cout << "Age: " << age << "\n";
	std::cout << "Color: " << color << "\n";
	std::cout << "Number of spots: " <<  noOfSpots << "\n";
	std::cout << "\n";
}

void DogWithSpots::addDog()
{
	std::string MyName;
	double myHeight;
	double myWeight;
	int myAge;
	std::string myColor;
	int myNoOfSpots;

	std::cout << "Dog with spots: " << "\n";
	std::cout << "Name: "; std::cin >> MyName;
	std::cout << "Height: "; std::cin >> myHeight;
	std::cout << "Weight: "; std::cin >> myWeight;
	std::cout << "Age: "; std::cin >> myAge;
	std::cout << "Color: "; std::cin >> myColor;
	std::cout << "Number of spots: "; std::cin >> myNoOfSpots;
	std::cout << "\n";

	name = MyName;
	height = myHeight;
	weight = myWeight;
	age = myAge;
	color = myColor;
	noOfSpots = myNoOfSpots;
}
