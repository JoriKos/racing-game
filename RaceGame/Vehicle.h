#pragma once
#include <string>
#include <iostream>
#include <vector>

class Vehicle
{
public:
	Vehicle(std::string tempName, bool isAICar);
	~Vehicle();

	int GetTime();
	//Getter/Setter components
	std::vector<std::string> GetComponents();
	void SetComponents(std::vector<std::string> tempVector, int vectorPos);
	
	std::vector<std::vector<std::string>> GetComponentSelection();
	void SetName(std::string carNameTemp);
	std::string GetName();

protected:
	int time; //Time on track, is random
	std::string name; //Car name
	std::vector<std::string> components{ "No wheels selected", "No door selected", "No engine selected", "No Driver selected", "No name selected" }; //Car components
	std::vector<std::vector<std::string>> componentSelection{ 
	/*Wheels*/  {"off-road", "slick", "thick", "or custom"}, 
	/*Doors*/   {"Horizontal doors", "vertical doors", "or custom"},
	/*Engines*/ {"Loud engine", "Silent engine", "Tiger 1 engine", "or custom" /* Does not include other parts of the Tiger 1 */},
	/*Driver*/  {"Max", "Kees", "Jan", "Henk", "or custom"},
	/*Empty vector so I don't have to fix a problem*/ {}
	};
};