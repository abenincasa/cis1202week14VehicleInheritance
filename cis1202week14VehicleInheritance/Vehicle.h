/*
Anthony (Tony) Benincasa 4/20/2024 CIS1202.N01
Week 14 Inheritance
This program defines the Vehicle class and its constructors and functions.
*/

#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
#include <iostream>
using namespace std;

class Vehicle
{
protected:
	string manufacturer;
	int year;
public:
	Vehicle() {
		manufacturer = "";
		year = 0;
	}
	Vehicle(string m, int y) {
		manufacturer = m;
		year = y;
	}
	void displayInfo();
	void setManufacturer(string);
	void setYear(int);
	string getManufacturer() const
	{
		return manufacturer;
	}
	int getYear() const
	{
		return year;
	}


};

#endif

