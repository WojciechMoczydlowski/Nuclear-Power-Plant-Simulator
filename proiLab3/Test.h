#include "NuclearPlantElement.h"
#include "NuclearPlant.h"
#include "ContainmentBuilding.h"
#include "FuelAssemblies.h"
#include "ReactorPressureVessel.h"
#include "CoolingTower.h"
#include "TurbineBuilding.h"
#include "Turbine.h"

#pragma once
class Test
{
public:
	Test();
	~Test();
	
	void autoTest();
private:
NuclearPlantElement myNuclearPlantElement;
NuclearPlant myNuclearPlant;
ContainmentBuilding myContainmentBuilding;
FuelAssemblies myFuelAssemblies;
ReactorPressureVessel myReactorPressureVessel;
CoolingTower myCoolingTower;
TurbineBuilding myTurbineBuilding;
Turbine myTurbine;
};

