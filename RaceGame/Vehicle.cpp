#include "Vehicle.h"

Vehicle::Vehicle(std::string tempName, bool isAICar)
{
	if (!isAICar) 
	{
		time = rand() % 10 + 1 * 50; //Random number generation (Source: http://www.cplusplus.com/reference/cstdlib/rand/)
	}
	if (isAICar) 
	{
		time = rand() % 10 + 1;
	}
	name = tempName;
}

Vehicle::~Vehicle()
{
}

int Vehicle::GetTime()
{
	return time;
}

std::vector<std::string> Vehicle::GetComponents()
{
	return components;
}

void Vehicle::SetComponents(std::vector<std::string> tempVector, int vectorPos)
{
	tempVector.at(vectorPos) = components.at(vectorPos);
}

std::vector<std::vector<std::string>> Vehicle::GetComponentSelection()
{
	return componentSelection;
}

void Vehicle::SetName(std::string carNameTemp)
{
	name = carNameTemp;
}

std::string Vehicle::GetName()
{
	return name;
}

