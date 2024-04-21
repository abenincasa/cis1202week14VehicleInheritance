/*
Anthony (Tony) Benincasa 4/20/2024 CIS1202.N01
Week 14 Inheritance
This program implements the functions of the Vehicle class.
*/
#include "Vehicle.h"
#include <string>
#include <iostream>

string manufacturer;
int year;

void Vehicle::displayInfo() {
	cout << "Vehicle Information:" << endl;
	cout << "The manufacturer is: " << manufacturer << endl;
	cout << "The year is: " << year << endl;
}
void Vehicle::setManufacturer(string m) {
	manufacturer = m;
}
void Vehicle::setYear(int y) {
	year = y;
}
