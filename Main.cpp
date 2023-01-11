#include <iostream>
#include "Dog.h"
#include "DogWithSpots.h"
#include "DogWithoutSpots.h"


int main()
{

	Dog dog;
	Dog dog1;
	Dog* dog2 = new DogWithSpots("Bruno", 1.2, 25, 3, "white", 10);
	Dog* dog3 = new DogWithSpots();
	Dog* dog4 = new DogWithoutSpots();
	dog1.addDog();
	dog3->addDog();
	dog4->addDog();

	system("cls");

	dog.printDogDetails();
	dog1.printDogDetails();
	dog2->printDogDetails();
	dog3->printDogDetails();
	dog4->printDogDetails();

	return 0;
}