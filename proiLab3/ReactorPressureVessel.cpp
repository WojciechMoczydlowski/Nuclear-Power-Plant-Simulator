#include "pch.h"
#include "ReactorPressureVessel.h"


ReactorPressureVessel::ReactorPressureVessel()
{
	pressure = 0;
	maxPressure = 80;
}


ReactorPressureVessel::~ReactorPressureVessel()
{
}

bool ReactorPressureVessel::generatePressure(int power) {
	int generatedPressure = power * 5;
	if (generatedPressure <= maxPressure) {
		pressure = generatedPressure;
		return true;
	}
	return false;
	
};
void ReactorPressureVessel::setMaxPressure(int maxPressureToFill) {
	maxPressure = maxPressureToFill;
};