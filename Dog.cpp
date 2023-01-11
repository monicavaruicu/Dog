#include "Dog.h"

Dog::Dog() : name("dog"), height(-1), weight(-1), age(-1), color("none")
{

}

Dog::Dog(std::string myName, double myHeight, double myWeight, int myAge, std::string myColor)
{
	name = myName;
	height = myHeight;
	weight = myWeight;
	age = myAge;
	color = myColor;
}

Dog::~Dog()
{

}

void Dog::printDogDetails()
{
	std::cout << "Name: " << name << "\n";
	std::cout << "Height: " <<  height << "\n";
	std::cout << "Weight: " <<  weight << "\n";
	std::cout << "Age: " <<  age << "\n";
	std::cout << "Color: " <<  color <<"\n";
	std::cout << "\n";
}

void Dog::addDog()
{
	std::string MyName;
	double myHeight;
	double myWeight; 
	int myAge;
	std::string myColor;

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

