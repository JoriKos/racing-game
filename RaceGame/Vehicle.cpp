#include "Vehicle.h"

Vehicle::Vehicle()
{
}

Vehicle::~Vehicle()
{
}

bool Vehicle::WinChance(float tempSpeed)
{
	return false;
}

float Vehicle::CalculateStats()
{

	float stats;
	return stats;
}

Driver Vehicle::PickDriver()
{
	for (int i = 0; i < drivers.size(); i++)
	{
		std::cout << drivers.at(i).GetName() << std::endl; //Print de array door middel van een for loop
	}

	std::string tDriver; //temporary Driver om te bepalen welke driver de gebruiker wilt

	std::cin >> tDriver;


}
