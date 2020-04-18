#include "Racetrack.h"

Racetrack::Racetrack()
{
}

Racetrack::~Racetrack()
{
}

void Racetrack::TimeOnTrack(Vehicle tempVehicle)
{
	for (int i = 0; i < tempVehicle.GetTime; i++) {
		std::cout << "Vroom!" << std::endl;
	}
}
