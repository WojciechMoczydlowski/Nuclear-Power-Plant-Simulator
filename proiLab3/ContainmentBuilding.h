#pragma once
#include "NuclearPlantElement.h"
#include "FuelAssemblies.h"
#include "ReactorPressureVessel.h"

class ContainmentBuilding: public NuclearPlantElement
{
public:
	FuelAssemblies myFuelAssemblies;
	ReactorPressureVessel myReactorPressureVessel;

	ContainmentBuilding();
	~ContainmentBuilding();

	bool generatePressure();
	void gainPower();
	void lessPower();
	void turnOnMachines();
	
	void setPower(int powerToFill);
	void setTemperatureOfWater(int temperatureOfWaterToFill);
	void setPressure(int pressureToFill);
	
	int getPower() { return power; };
	int getTemperatureOfWater() { return temperatureOfWater; }
	int getPressure() { return pressure; }

private:
	int temperatureOfWater; 
	int pressure; 
	int power;
};

