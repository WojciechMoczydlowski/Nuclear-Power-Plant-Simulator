#pragma once
#include "NuclearPlantElement.h"
class CoolingTower : public NuclearPlantElement
{
public:
	CoolingTower();
	~CoolingTower();
	void setScaleOfCooling(int scale);
	int getScaleOfCooling() { return scaleOfCooling; }

	int coolWater();
private:
	int scaleOfCooling;
};

