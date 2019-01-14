#include "pch.h"
#include "CoolingTower.h"
#include "NuclearPlantElement.h"

CoolingTower::CoolingTower()
{
	scaleOfCooling = 0;
	waterTemperature = 20;
}

CoolingTower::~CoolingTower()
{

}

void CoolingTower::setScaleOfCooling(int scale) {
	scaleOfCooling = scale;
};

void CoolingTower::setTemperature(int temperature) {
	waterTemperature = temperature;
};

void CoolingTower::coolWater() {
	waterTemperature = scaleOfCooling;
};