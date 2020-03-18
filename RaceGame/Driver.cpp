#include "Driver.h"

Driver::Driver()
{
}

Driver::~Driver()
{
}

void Driver::SetName(std::string nameTemp)
{
	name = nameTemp;
}

std::string Driver::GetName()
{
	return name;
}
