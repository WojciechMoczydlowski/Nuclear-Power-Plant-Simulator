#include "pch.h"
#include "CoolingTower.h"
#include "NuclearPlantElement.h"

CoolingTower::CoolingTower()
{
	scaleOfCooling = 20;
}

CoolingTower::~CoolingTower()
{

}

void CoolingTower::setScaleOfCooling(int scale) {
	scaleOfCooling = scale;
};

int CoolingTower::coolWater() {
	return scaleOfCooling;
};