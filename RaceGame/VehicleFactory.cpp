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

void VehicleFactory::AskForComponents(Vehicle tempVehicle) //Sets components
{
	std::vector<std::string> tempComponents{ "Wheels", "Door", "Engine", "Driver", "Name" };
	std::string component;
	for (int i = 0; i < tempComponents.size(); i++)
	{
		std::cout << "Choose your component: " << tempComponents.at(i) << std::endl; //Goes through the tempComponents
		for (int i = 0; i < tempVehicle.GetComponentSelection().size(); i++) //Shows selection
		{
			for (int j = 0; j < tempVehicle.GetComponentSelection().at(i).size(); j++) 
			{
				std::cout << tempVehicle.GetComponentSelection().at(i).at(j);
			}
				std::cin >> component;
				component = tempComponents.at(i);
		}
	}
	hasWheels = true;
	hasDoor = true;
	hasEngine = true;
	hasDriver = true;
	hasName = true;
	
	CarComplete(tempVehicle);
}

bool VehicleFactory::CarComplete(Vehicle tempVehicle1)
{
	//Checks if the car has every component if they are somehow not complete it will rerun AskForComponents and reset the car
	if (hasWheels && hasDoor && hasEngine && hasDriver && hasName)
	{ 
		std::cout << "Your car is ready" << std::endl;
		std::string tempName;
		std::cout << "Enter your car name" << std::endl;
		std::cin >> tempName;
		tempVehicle1.SetName(tempName);
		return true;
	}
	else
	{
		AskForComponents(tempVehicle1);
	}
}

Vehicle VehicleFactory::CreateVehicle(Vehicle tempVehicle2, std::string carNameTemp) //Will create the car
{
	Vehicle tempVehicle = Vehicle(carNameTemp);
	return tempVehicle;
}