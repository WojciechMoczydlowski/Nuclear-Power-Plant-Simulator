#pragma once
#include "NuclearPlantElement.h"
class Turbine : public NuclearPlantElement
{ 
public:
	Turbine();
	~Turbine();

	Turbine(int effectiveness);

	int getmaxPowerGenerating() { return maxPowerGenerating; }
	void setmaxPowerGenerating(int power);

	int generatePower(int pressure);
private:
	int maxPowerGenerating;
	int turbineEffectiveness;
};

