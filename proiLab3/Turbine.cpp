#include "pch.h"
#include "Turbine.h"
#include "NuclearPlantElement.h"

Turbine::Turbine()
{
}


Turbine::~Turbine()
{
}

Turbine::Turbine(int effectiveness) {
	turbineEffectiveness = effectiveness;
};

void Turbine::setmaxPowerGenerating(int power) {
	maxPowerGenerating = power;
};

int Turbine::generatePower(int pressure) {
	return ((pressure * 17 + 7*pressure*turbineEffectiveness)* turbineEffectiveness) /3;
};