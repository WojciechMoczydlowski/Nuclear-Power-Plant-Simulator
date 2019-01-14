#include "NuclearPlantElement.h"
#pragma once
class ReactorPressureVessel : public NuclearPlantElement
{
public:
	ReactorPressureVessel();
	~ReactorPressureVessel();

	bool generatePressure(int power);
	void setMaxPressure(int maxPressureToFill);

	int getPressure() { return pressure; }
	int getMaxPressure() { return maxPressure; }

private:
	int pressure;
	int maxPressure;
};

