#include "pch.h"
#include "FuelAssemblies.h"
#include "NuclearPlantElement.h"

FuelAssemblies::FuelAssemblies()
{
	spaceForFuel = 13000;
	supplyOfFuel = 13000;
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


bool FuelAssemblies::combastFuel(int power) {

	int rateOfCombustion = power * 100;
	if (supplyOfFuel >= rateOfCombustion) {
		supplyOfFuel -= rateOfCombustion;
		return true;
	}
	else return false;	
};