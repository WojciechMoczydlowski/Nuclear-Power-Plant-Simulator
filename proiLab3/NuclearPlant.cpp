#include "pch.h"
#include "NuclearPlant.h"


NuclearPlant::NuclearPlant()
{
}


NuclearPlant::~NuclearPlant()
{
}


void NuclearPlant::turnOnAllMachines() {

	myCoolingTower.turnOnMachine();

	myContainmentBuilding.turnOnMachine();
	myContainmentBuilding.turnOnMachines();

	myTurbineBuilding.turnOnMachine();
	myTurbineBuilding.turnOnAllTurbines();
	
	myCoolingTower.turnOnMachine();
};


bool NuclearPlant::everythingWorkCorreclty() {
	bool correctlyWorkOfMainBuilding = myContainmentBuilding.machineWorkCorrectly() && myCoolingTower.machineWorkCorrectly() && myTurbineBuilding.machineWorkCorrectly();
	bool correctlyWorkOfSubElements = myContainmentBuilding.allMachinesWorkCorrectly() && myTurbineBuilding.allTurbinesWorkCorrectly();
	return correctlyWorkOfMainBuilding && correctlyWorkOfSubElements;
};


int NuclearPlant::generateEnergy(int power) {
	
	turnOnAllMachines();
	
	if (!everythingWorkCorreclty()) return 0;

	myContainmentBuilding.setPower(power);


	if (!myContainmentBuilding.generatePressure()) return 0;
	
	int pressure = myContainmentBuilding.getPressure();

	myContainmentBuilding.setTemperatureOfWater(myCoolingTower.coolWater());
	
	int energy = myTurbineBuilding.calculateGeneratingPower(pressure);

	return energy;
};