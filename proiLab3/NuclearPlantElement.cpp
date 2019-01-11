#include "pch.h"
#include "NuclearPlantElement.h"


NuclearPlantElement::NuclearPlantElement()
{
	workCorrectly = true;
	turnOn = false;
}


NuclearPlantElement::~NuclearPlantElement()
{

}

void NuclearPlantElement::turnOnMachine() {
	turnOn = true;
};
void NuclearPlantElement::turnOffMachine() {
	turnOn = false;
};

bool NuclearPlantElement::machineWorkCorrectly() {
	return workCorrectly;
};

void NuclearPlantElement::repearMachine() {
	workCorrectly = true;
};
void NuclearPlantElement::breakMachine() {
	workCorrectly = false;
};