#include "Cars.h"
#include <iostream>

using namespace std;

Cars::Cars() 
{
	maxNumbers = 10;
	number = 0;
	cars = new Car[10];
};
Cars::Cars(const int n)
{
	maxNumbers = n;
	number = 0;
	cars = new Car[n];
}
void Cars::Add(Car car)
{
	cars[number] = car;
	number++;
}
void Cars::Change(int index, Car newCar)
{
	cars[index] = newCar;
}

void Cars::Remove(int index)
{
	for (int i = index; i < number - 1; i++)
	{
		cars[i] = cars[i+1];
	}
	number--;
}
void Cars::Display(int index)
{
	cars[index].toString();
}
void Cars::Display()
{
	for (int i = 0; i < number; i++)
		Display(i);
}
void Cars::Sort()
{	
	for (int i = 0; i < number; i++)
	{
		for (int j = 0; j < number; j++)
		{
			if (cars[j].GetPrice() > cars[i].GetPrice())
			{
				Car temp = cars[i];
				cars[i] = cars[j];
				cars[j] = temp;
			}
		}
	}
}
Car Cars::FindMaxPrice()
{
	Car result; 
	for (int j = 0; j < number - 1; j++)
	{
		if (cars[j+1].GetPrice() > cars[j].GetPrice())
		{
			result = cars[j+1];
		}
	}
	return result;
}