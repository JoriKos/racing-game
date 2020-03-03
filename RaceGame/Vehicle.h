#pragma once
#include "Driver.h"
#include <string>
#include <iostream>

class Vehicle
{
public:
	Vehicle();
	~Vehicle();
	bool WinChance(float tempSpeed) 
	{

	}
	float CalculateStats() 
	{

	}
	Driver PickDriver()
	{
		for (int i = 0; i < drivers.size(); i++)
		{
			std::cout << drivers[i] << std::endl; //Print de array door middel van een for loop
		}
	}


private:
	std::string tireType;
	float maxSpeed;
	std::string name;
	std::string frame;
	bool door;

protected:
	std::vector<Driver> drivers = {}; //Voeg drivers toe
	std::vector<std::string> driverNames = {}; //Voeg drivers toe
};