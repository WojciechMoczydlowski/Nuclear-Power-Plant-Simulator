#pragma once
#include "NuclearPlantElement.h"
class CoolingTower : public NuclearPlantElement
{
public:
	CoolingTower();
	~CoolingTower();
	void setScaleOfCooling(int scale);
	int getScaleOfCooling() { return scaleOfCooling; }

	void setTemperature(int temperature);
	void coolWater();
private:
	int scaleOfCooling;
	int waterTemperature;
};

