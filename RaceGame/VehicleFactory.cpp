#include "VehicleFactory.h"
#include <iostream>
#include <string>
#include <vector>

VehicleFactory::VehicleFactory()
{
}

VehicleFactory::~VehicleFactory()
{
}

Vehicle VehicleFactory::AskForComponents(Vehicle tempVehicle) //Sets components
{
	std::vector<std::string> tempComponents{ "Wheels", "Door", "Engine", "Driver"};
	char component[100];
	for (int i = 0; i < 4; i++)
	{
		for (int j = i; j < tempVehicle.GetComponentSelection().size(); j++) //Shows selection
		{
			std::cout << "Choose your component: " << tempComponents.at(i) << "\n"; //Goes through the tempComponents
			for (int k = 0; k < tempVehicle.GetComponentSelection().at(j).size(); k++) 
			{
				std::cout << tempVehicle.GetComponentSelection().at(j).at(k) << "\n";
			}
			std::cin.getline(component, sizeof(component));
			tempComponents.push_back(component);
			break;
		}
	}

	hasWheels = true;
	hasDoor = true;
	hasEngine = true;
	hasDriver = true;
	hasName = true;
	
	
	return CarComplete(tempVehicle);
}

Vehicle VehicleFactory::CarComplete(Vehicle tempVehicle1)
{
	//Checks if the car has every component
	if (hasWheels && hasDoor && hasEngine && hasDriver && hasName)
	{ 
		std::cout << "Your car is ready" << std::endl;
		return tempVehicle1;
	}
}

Vehicle VehicleFactory::CreateVehicle(Vehicle tempVehicle2, std::string carNameTemp, bool isAICar) //Will create the car
{
	tempVehicle2 = Vehicle(carNameTemp, isAICar);
	return tempVehicle2;
}
