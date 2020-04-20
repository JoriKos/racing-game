#pragma once
#include "Vehicle.h"
#include <string>
#include <vector>

class VehicleFactory
{
public:
	VehicleFactory();
	~VehicleFactory();

	void AskForComponents(Vehicle tempVehicle);
	bool CarComplete(Vehicle tempVehicle); //Checks if car is complete
	Vehicle CreateVehicle(Vehicle tempVehicle, std::string carNameTemp);

private:
	//Bools for checking components
	bool hasWheels = false;
	bool hasDoor = false;
	bool hasEngine = false;
	bool hasDriver = false;
	bool hasName = false;
};