#pragma once
#include "NuclearPlantElement.h"
class FuelAssemblies : public NuclearPlantElement
{
public:
	FuelAssemblies();
	~FuelAssemblies();

	void setSupplyOfFuel(int fuel);
	void setSpaceOfFuel(int space);
	void setRateOfCombustion(int rate);

	int getSupplyOfFuel() { return supplyOfFuel; }
	int getSpaceForFuel() { return spaceForFuel; }
	int getRateOfCombustion() { return rateOfCombustion; }

	bool combastFuel();

private:
	int spaceForFuel;
	int supplyOfFuel;
	int rateOfCombustion;
};

