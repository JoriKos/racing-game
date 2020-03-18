#pragma once
#include "Driver.h"
#include <string>
#include <iostream>

class Vehicle
{
public:
	Vehicle();
	~Vehicle();
	bool WinChance(float tempSpeed);
	float CalculateStats();
	Driver PickDriver();


private:
	std::string tireType;
	float maxSpeed;
	std::string name;
	std::string frame;
	bool door;

protected:
	std::vector<Driver> drivers = {}; //Voeg drivers toe
};