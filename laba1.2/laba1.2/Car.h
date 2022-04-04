#pragma once
#include <string>
#include <sstream>

enum carType
{
	regular,
	truck
};


class Car
{
private:
	carType type;
	char* brand;
	int year;
	double maxSpeed;
	double price;
public:
	Car();
	Car(carType, char*, int, double, double);
	void toString();
	void SetType(carType type) { this->type = type; };
	void SetBrand(char* brand) { this->brand = brand; };
	void SetYear(int year) { this->year = year; };
	void SetMaxSpeed(double maxSpeed) { this->maxSpeed = maxSpeed; };
	void SetPrice(double price) { this->price = price; };

	carType GetType() { return type; };
	char* GetBrand() { return brand; };
	int GetYear() { return year; };
	double GetMaxSpeed() { return maxSpeed; };
	double GetPrice() { return price; };
};
