#include <iostream>
#include "Vehicle.h"
#include "VehicleFactory.h"
#include "Racetrack.h"
#include <vector>

int main()
{
	/*
	//Creates aiVehicle vector
	std::vector<Vehicle> aiVehicles;
	std::string aiName;
	*/

	/*for (int i = 0; i < 11; i++) //Creates AI vehicles
	{
		aiName = "AI Vehicle " + std::to_string(i);
		aiVehicles.push_back(Vehicle(aiName, true));
	}

	//Print aiVehicle names
	for (int i = 0; i < aiVehicles.size();i++) 
	{
		std::cout << aiVehicles.at(i).GetName() << std::endl;
	}
	*/

	char tempName[500];
	Racetrack racetrack = Racetrack();
	Vehicle userVehicle = Vehicle("tempVehicle", false);
	VehicleFactory factory = VehicleFactory();
	std::cout << "Enter your car name" << std::endl;
	std::cin.getline(tempName, sizeof(tempName));
	userVehicle.SetName(tempName);
	userVehicle = factory.AskForComponents(userVehicle);
	racetrack.TimeOnTrack(userVehicle, false); //Asks vehicle for components, gets name, and checks the time on track
	//racetrack.TimeOnTrack(aiVehicles.at(i), true);
} 