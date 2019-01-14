#pragma once
#include "NuclearPlantElement.h"
#include "FuelAssemblies.h"
#include "ReactorPressureVessel.h"

class ContainmentBuilding: public NuclearPlantElement
{
public:
	ContainmentBuilding();
	~ContainmentBuilding();

	void generatePressure();
	void gainPower();
	void lessPower();
	
	void setPower(int powerToFill);
	void setTemperatureOfWater(int temperatureOfWaterToFill);
	void setPressure(int pressureToFill);
	
	int getPower() { return power; };
	int getTemperatureOfWater() { return temperatureOfWater; }
	int getPressure() { return pressure; }

private:
	FuelAssemblies myFuelAssemblies;
	ReactorPressureVessel myReactorPressureVessel;

	int temperatureOfWater; 
	int pressure; 
	int power;
};

