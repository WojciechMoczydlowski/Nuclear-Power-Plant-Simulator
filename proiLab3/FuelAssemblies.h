#pragma once
#include "NuclearPlantElement.h"
class FuelAssemblies : public NuclearPlantElement
{
public:
	FuelAssemblies();
	~FuelAssemblies();

	void setSupplyOfFuel(int fuel);
	void setSpaceOfFuel(int space);

	int getSupplyOfFuel() { return supplyOfFuel; }
	int getSpaceForFuel() { return spaceForFuel; }

	bool combastFuel(int power);

private:
	int spaceForFuel;
	int supplyOfFuel;
};

