#include "pch.h"
#include "FuelAssemblies.h"
#include "NuclearPlantElement.h"

FuelAssemblies::FuelAssemblies()
{
	spaceForFuel = 13000;
	supplyOfFuel = 0;
}


FuelAssemblies::~FuelAssemblies()
{
}


void FuelAssemblies::setSupplyOfFuel(int fuel) {
	
	if (fuel > spaceForFuel) supplyOfFuel = spaceForFuel;
	else supplyOfFuel = fuel;
};

void FuelAssemblies::setSpaceOfFuel(int space) {

	spaceForFuel = space;
};

void FuelAssemblies::setRateOfCombustion(int rate) {
	rateOfCombustion = rate;
};

bool FuelAssemblies::combastFuel() {
	if (supplyOfFuel > rateOfCombustion) {
		supplyOfFuel -= rateOfCombustion;
		return true;
	}
	else return false;	
};