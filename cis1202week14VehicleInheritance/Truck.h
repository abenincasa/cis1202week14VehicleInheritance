/*
Anthony (Tony) Benincasa 4/20/2024 CIS1202.N01
Week 14 Inheritance
This program defines the Truck class which extends the Vehicle and its constructors and functions.
*/

#ifndef TRUCK_H
#define TRUCK_H
#include <string>
#include <iostream>
#include "Vehicle.h"
using namespace std;

class Truck : public Vehicle
{
private:
	int towCap;
public:
	Truck(int tc) {
		towCap = tc;
	}
	void displayInfo();
	void setTowCap(int);
	int getTowCap() const
	{
		return towCap;
	}


};


#endif

