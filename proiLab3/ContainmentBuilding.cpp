#include "pch.h"
#include "ContainmentBuilding.h"
#include "NuclearPlantElement.h"

ContainmentBuilding::ContainmentBuilding()
{
	temperatureOfWater = 0;
	pressure = 0;
	power = 0;
}


ContainmentBuilding::~ContainmentBuilding()
{

}

void ContainmentBuilding::generatePressure() {

	int generatedPower = power;
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