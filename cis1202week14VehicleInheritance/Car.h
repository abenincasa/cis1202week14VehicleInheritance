/*
Anthony (Tony) Benincasa 4/20/2024 CIS1202.N01
Week 14 Inheritance
This program defines the Car class which extends the Vehicle and its constructors and functions.
*/

#ifndef CAR_H
#define CAR_H
#include <string>
#include <iostream>
#include "Vehicle.h"

using namespace std;

class Car : public Vehicle
{
private:
	int numOfDoors;
public:
	Car(int nod) {
		numOfDoors = nod;
	}
	void displayInfo();
	void setNumOfDoors(int);
	int getNumOfDoors() const
	{
		return numOfDoors;
	}

};



#endif

