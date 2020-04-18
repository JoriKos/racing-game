#include "Racetrack.h"

Racetrack::Racetrack()
{
}

Racetrack::~Racetrack()
{
}

void Racetrack::TimeOnTrack(Vehicle tempVehicle)
{
	for (int i = 0; i < tempVehicle.GetTime + 1; i++) {
		if (i = tempVehicle.GetTime) {
			std::cout << tempVehicle.GetName << " has been kicked off the track" << std::endl;
			break;
		}
	}
}
