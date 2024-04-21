/*
Anthony (Tony) Benincasa 4/20/2024 CIS1202.N01
Week 14 Inheritance
This program implements the functions of the Car class, an extension of the Vehicle class.
*/
#include "Car.h"


int numOfDoors;

void Car::displayInfo() {
	Vehicle::displayInfo();					// call base class display function
	cout << "Number of Doors: " << numOfDoors << endl;
}
void Car::setNumOfDoors(int nod) {
	numOfDoors = nod;
}