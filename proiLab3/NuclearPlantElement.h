#pragma once
class NuclearPlantElement
{
public:
	NuclearPlantElement();
	~NuclearPlantElement();

	void turnOnMachine();
	void turnOffMachine();

	bool machineWorkCorrectly();

	void repearMachine();
	void breakMachine();

	bool getTurnOn() { return turnOn; }
private:
	bool turnOn;
	bool workCorrectly;
};

