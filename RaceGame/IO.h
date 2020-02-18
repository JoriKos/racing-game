#pragma once
#include <iostream>
class IO
{
public:
	float GetFloat()
	{
		float tempF;
		std::cin >> tempF;
		return tempF;
	}

	std::string GetString() 
	{
		std::string tempS;
		std::cin >> tempS;
		return tempS;
	}
};