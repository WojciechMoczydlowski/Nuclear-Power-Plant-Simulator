#include "pch.h"
#include "Turbine.h"
#include "NuclearPlantElement.h"

Turbine::Turbine()
{
}


Turbine::~Turbine()
{
}

Turbine::Turbine(int effectiveness,int  maxPower) {
	turbineEffectiveness = effectiveness;
	maxPowerGenerating = maxPower;
}

void Turbine::setmaxPowerGenerating(int power) {
	maxPowerGenerating = power;
};

int Turbine::generatePower(int pressure) {
	int power =  ((pressure * 17 + 7*pressure*turbineEffectiveness)* turbineEffectiveness) /3;
	if (power > maxPowerGenerating) return -1;
	else return power;
};