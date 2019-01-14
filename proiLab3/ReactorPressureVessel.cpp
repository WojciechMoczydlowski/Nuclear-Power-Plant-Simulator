#include "pch.h"
#include "ReactorPressureVessel.h"


ReactorPressureVessel::ReactorPressureVessel()
{
	pressure = 0;
	maxPressure = 0;
}


ReactorPressureVessel::~ReactorPressureVessel()
{
}



void ReactorPressureVessel::setPressure(int pressureToFill) {
	pressure = pressureToFill;
};
void ReactorPressureVessel::setMaxPressure(int maxPressureToFill) {
	maxPressure = maxPressureToFill;
};