#include <iostream>
#include "Vehicle.h"
#include "VehicleFactory.h"
#include "Driver.h"
#include "Racetrack.h"
#include <vector>

int main()
{
	std::vector<Vehicle> aiVehicles;

	Vehicle userVehicle = Vehicle("tempVehicle");
	VehicleFactory factory = VehicleFactory();
	factory.AskForComponents(userVehicle);
} 