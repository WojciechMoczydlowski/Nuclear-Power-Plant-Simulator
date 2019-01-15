#include "pch.h"
#include "ContainmentBuilding.h"
#include "NuclearPlantElement.h"

ContainmentBuilding::ContainmentBuilding()
{
	temperatureOfWater = 20;
	power = 0;
}


ContainmentBuilding::~ContainmentBuilding()
{

}

void ContainmentBuilding::turnOnMachines() {
	myReactorPressureVessel.turnOnMachine();
	myFuelAssemblies.turnOnMachine();
};

void ContainmentBuilding::turnOffMachines() {
	myReactorPressureVessel.turnOffMachine();
	myFuelAssemblies.turnOffMachine();
};


bool ContainmentBuilding::allMachinesWorkCorrectly() {

	return myFuelAssemblies.machineWorkCorrectly() && myReactorPressureVessel.machineWorkCorrectly();
};


bool ContainmentBuilding::generatePressure() {

	if (temperatureOfWater > 120) return false;
	else temperatureOfWater = 130;
	if (!myFuelAssemblies.getTurnOn() || !myReactorPressureVessel.getTurnOn()) return false;
	if (!myFuelAssemblies.machineWorkCorrectly() || !myReactorPressureVessel.machineWorkCorrectly()) return false;
	if (!myFuelAssemblies.combastFuel(power)) return false;
	if (!myReactorPressureVessel.generatePressure(power)) return false;
	pressure = myReactorPressureVessel.getPressure();
	return true;
};



void ContainmentBuilding::gainPower() {
	power += 1;
};
void ContainmentBuilding::lessPower() {
	if(power -= 1 >= 0 ) power -= 1; 
};



void ContainmentBuilding::setPower(int powerToFill) {
	power = powerToFill;
};

void ContainmentBuilding::setTemperatureOfWater(int temperatureOfWaterToFill) {
	temperatureOfWater = temperatureOfWaterToFill;
};

void ContainmentBuilding::setPressure(int pressureToFill) {
	pressure = pressureToFill;
};