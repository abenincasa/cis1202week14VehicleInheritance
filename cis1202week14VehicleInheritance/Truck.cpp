/*
Anthony (Tony) Benincasa 4/20/2024 CIS1202.N01
Week 14 Inheritance
This program implements the functions of the Truck class, an extension of the Vehicle class.
*/
#include "Truck.h"

int towCap;

void Truck::displayInfo() {
	Vehicle::displayInfo();					// call base class display function
	cout << "Towing Capacity: " << towCap << endl;
}
void Truck::setTowCap(int tc) {
	towCap = tc;
}