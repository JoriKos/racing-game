#pragma once
#include "Vehicle.h"
#include <string>
#include <vector>

class VehicleFactory
{
public:
	VehicleFactory();
	~VehicleFactory();

	Vehicle AskForComponents(Vehicle tempVehicle);
	Vehicle CarComplete(Vehicle tempVehicle1); //Checks if car is complete
	Vehicle CreateVehicle(Vehicle tempVehicle2, std::string carNameTemp, bool isAICar);

private:
	//Bools for checking components
	bool hasWheels = false;
	bool hasDoor = false;
	bool hasEngine = false;
	bool hasDriver = false;
	bool hasName = false;
};