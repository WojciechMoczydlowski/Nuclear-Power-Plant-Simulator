#include "ContainmentBuilding.h"
#include "TurbineBuilding.h"
#include "CoolingTower.h"
#pragma once
class NuclearPlant
{
public:
	NuclearPlant();
	~NuclearPlant();

	ContainmentBuilding myContainmentBuilding;
	TurbineBuilding myTurbineBuilding;
	CoolingTower myCoolingTower;
	
	void turnOnAllMachines();
	bool everythingWorkCorreclty();

};

