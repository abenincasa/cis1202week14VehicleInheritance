/*
Anthony (Tony) Benincasa 4/20/2024 CIS1202.N01
Week 14 Inheritance
This program is a driver file to test the class files. It calls functions, collects and displays data.
*/

#include "perslib.h"
#include "Vehicle.h"
#include "Car.h"



// function prototypes

int main() {

	// declare and intialize variables
	string userManufacturer;
	int userYear, userNumOfDoors;

	// Vehicle Info
	cout << "Vehicle:\nEnter the manufacturer: ";
	getline(cin, userManufacturer);
	cout << "Enter year: ";
	cin >> userYear;
	Vehicle v1 = Vehicle(userManufacturer, userYear);
	v1.displayInfo();

	// Car Info
	cout << "\nCar:\nEnter the manufacturer: ";
	cin.ignore();
	getline(cin, userManufacturer);
	cout << "Enter year: ";
	cin >> userYear;
	cout << "Enter number of doors: ";
	cin >> userNumOfDoors;
	Car c1 = Car(userNumOfDoors);
	c1.setManufacturer(userManufacturer);
	c1.setYear(userYear);
	c1.displayInfo();


	endProg();

}
