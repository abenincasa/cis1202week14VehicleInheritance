/*
Anthony (Tony) Benincasa 4/20/2024 CIS1202.N01
Week 14 Inheritance
This program is a driver file to test the class files. It calls functions, collects and displays data.
*/

#include "perslib.h"
#include "Vehicle.h"


// function prototypes

int main() {

	// declare and intialize variables
	string userManufacturer;
	int userYear;

	// Vehicle Info
	cout << "Vehicle:\nEnter the manufacturer: ";
	getline(cin, userManufacturer);
	cout << "Enter year: ";
	cin >> userYear;
	Vehicle v1 = Vehicle(userManufacturer, userYear);
	v1.displayInfo();


	endProg();

}
