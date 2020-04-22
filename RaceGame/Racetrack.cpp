#include "Racetrack.h"
#include <thread>
#include <chrono>

Racetrack::Racetrack()
{
}

Racetrack::~Racetrack()
{
}

void Racetrack::TimeOnTrack(Vehicle tempVehicle, bool isAI)
{
	if (!isAI)
	{
		for (int i = tempVehicle.GetTime(); i > 0; --i)
		{
			if (i % 2 == 0) 
			{
				std::cout << i << "\n";
			}
			std::this_thread::sleep_for(std::chrono::milliseconds(50));
			if (i < 3) 
			{
				std::cout << tempVehicle.GetName() << " has been kicked off the track" << std::endl;
				break;
			}
		}
	}

	if (isAI) 
	{
		for (int i = tempVehicle.GetTime(); i > 0; --i) 
		{
			if (i < 0)
			{
				std::cout << tempVehicle.GetName() << " has been kicked off the track" << std::endl;
				break;
			}
		}
	}
}
