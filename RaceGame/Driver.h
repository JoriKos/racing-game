#pragma once
#include "VehicleFactory.h"
#include <string>

class Driver
{

private:
	float age;
	float skill;
	std::string name;
	std::string bestCar;
	std::string bestTrack;

public:
	Driver();
	~Driver();
	void SetName(std::string nameTemp)
	{
		name = nameTemp;
	}

};