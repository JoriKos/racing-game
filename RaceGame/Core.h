#pragma once
#include "Vehicle.h"
#include "VehicleFactory.h"
#include "Driver.h"
#include "Racetrack.h"
#include <vector>

class Core
{
	std::vector<Vehicle> aiVehicles;

	Vehicle userVehicle = Vehicle("tempVehicle");

};