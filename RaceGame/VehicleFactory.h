#pragma once
#include "Vehicle.h"
#include <string>
#include <vector>

class VehicleFactory
{
public:
	VehicleFactory();
	~VehicleFactory();

	bool CarComplete(Vehicle tempVehicle); //Checks if car is complete
	Vehicle CreateVehicle(Vehicle tempVehicle, std::string carNameTemp);
	void AskForComponents(Vehicle tempVehicle);

private:
	// Bools for checking components
	bool hasWheels = false;
	bool hasDoor = false;
	bool hasEngine = false;
	bool hasDriver = false;
	bool hasName = false;
};

