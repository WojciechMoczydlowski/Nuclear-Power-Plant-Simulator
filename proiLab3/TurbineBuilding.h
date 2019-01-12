#pragma once
#include "NuclearPlantElement.h"
#include "Turbine.h"
class TurbineBuilding : public NuclearPlantElement
{
public:
	TurbineBuilding();
	~TurbineBuilding();

	Turbine firstTurbine = Turbine(13,213821);
	Turbine secondTurbine = Turbine(17, 219532);
	Turbine thirdTurbine = Turbine(10, 142331);
	Turbine fourthTurbine = Turbine(27, 221998);

private:
	int maxPower;
	int geteratingPower;
	int steamPower;
};

