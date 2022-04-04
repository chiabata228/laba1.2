#include "Car.h"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

Car::Car() {
	type = regular;
	brand = new char[] {'B', 'M', 'W'};
	year = 1998;
	maxSpeed = 240;
	price = 2950;
};
Car::Car(carType type, char* brand, int year, double maxSpeed, double price) {
	this->type = type;
	this->brand = brand;
	this->year = year;
	this->maxSpeed = maxSpeed;
	this->price = price;
};
void Car::toString() {
	string brandToString = "";
	for (int i = 0; i < sizeof(brand); i++)
	    brandToString += brand[i];
	if (type == 0)
		  cout << "Regular car ";
		else
		 cout << "Truck ";
	cout << GetType() << " car with max speed: " << GetMaxSpeed() << " costs: " << GetPrice();
};