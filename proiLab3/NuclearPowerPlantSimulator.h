#include "NuclearPlant.h"
#pragma once
class NuclearPowerPlantSimulator
{
public:
	NuclearPowerPlantSimulator();
	~NuclearPowerPlantSimulator();

	NuclearPlant myNuclearPlant;

	void setPower(int powerToFill);
	int getPower() { return power; }

	void simulateNuclearPowerPlant();

	
private:
	int power;

	void changePower();
	void settingsOfContainmentBuilding();
	void settingsOfCoolingTower();
	void settingsOfTurbineBuilding();
};

