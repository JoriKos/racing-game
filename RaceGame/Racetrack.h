#pragma once
#include "Vehicle.h"

class Racetrack
{
public:
	Racetrack();
	~Racetrack();

	void TimeOnTrack(Vehicle tempVehicle, bool isAI); //Checks time the car has spent on the track
};

