#include "pch.h"
#include "TurbineBuilding.h"
#include "Turbine.h"
#include "NuclearPlantElement.h"

TurbineBuilding::TurbineBuilding()
{
	maxPower = 1000000;
}


TurbineBuilding::~TurbineBuilding()
{
}
int TurbineBuilding::calculateGeneratingPower(int steamPower) {

	int power = 0;
	power += firstTurbine.generatePower(steamPower / 4);
	power += secondTurbine.generatePower(steamPower / 4);
	power += thirdTurbine.generatePower(steamPower / 4);
	power += fourthTurbine.generatePower(steamPower / 4);

	if (power > maxPower) return 0;
	else return power;
};

void TurbineBuilding::turnOnAllTurbines() {

	firstTurbine.turnOnMachine();
	secondTurbine.turnOnMachine();
	thirdTurbine.turnOnMachine();
	fourthTurbine.turnOnMachine();
};
void TurbineBuilding::turnOffAllTurbines() {

	firstTurbine.turnOffMachine();
	secondTurbine.turnOffMachine();
	thirdTurbine.turnOffMachine();
	fourthTurbine.turnOffMachine();
};


bool TurbineBuilding::allTurbinesWorkCorrectly() {
	return  (firstTurbine.machineWorkCorrectly() && secondTurbine.machineWorkCorrectly() && thirdTurbine.machineWorkCorrectly() && fourthTurbine.machineWorkCorrectly());
};