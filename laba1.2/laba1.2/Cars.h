#pragma once
#include "Car.h"

class Cars
{
private:
	static Car* cars;
	int number;
	int maxNumbers;
public:
	Cars();
	Cars(const int);
	void Add(Car);
	void Change(int,Car);
	void Remove(int);
	void Display(int);
	void Display();
	void Sort();
	Car FindMaxPrice();
};