#include "pch.h"
#include "ReactorPressureVessel.h"


ReactorPressureVessel::ReactorPressureVessel()
{
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