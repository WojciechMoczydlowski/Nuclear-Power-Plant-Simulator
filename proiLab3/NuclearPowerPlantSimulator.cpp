#include "pch.h"
#include "NuclearPowerPlantSimulator.h"
#include <iostream>



NuclearPowerPlantSimulator::NuclearPowerPlantSimulator()
{
	power = 0;
}


NuclearPowerPlantSimulator::~NuclearPowerPlantSimulator()
{
}

void NuclearPowerPlantSimulator::setPower(int powerToFill) {

	power = powerToFill;
};


void NuclearPowerPlantSimulator::simulateNuclearPowerPlant() {

	std::cout << "Welcome in our nuclearPlantSimulator!\n";
	while (true) {
		std::cout << "Choose what do you want to do: \n";
		std::cout << "1.Generate Power\n";
		std::cout << "2.Change Power Of Plant\n";
		std::cout << "3.Settings of ContainmentBuilding\n";
		std::cout << "4.Settings of CoolingTower\n";
		std::cout << "5.Settings of TurbineBuilding\n";
		std::cout << "6.Exit\n";

		int decisionNumber = 1;
		std::cin >> decisionNumber;

		if (decisionNumber == 1) {
			std::cout << myNuclearPlant.generateEnergy(power);
		}
		else if (decisionNumber == 2) changePower();
		else if (decisionNumber == 3) settingsOfContainmentBuilding();
		else if (decisionNumber == 4) settingsOfCoolingTower();
		else if (decisionNumber == 5) settingsOfTurbineBuilding();
		else if (decisionNumber == 6) return;

		std::cout << "\n";
		system("pause");
		system("cls");
	}
};


void NuclearPowerPlantSimulator::changePower() {
	int powerToChange;
	std::cout << "Enter power of plant:";
	std::cin >> powerToChange;
	setPower(powerToChange);
};

void NuclearPowerPlantSimulator::settingsOfContainmentBuilding() {
	std::cout << "settingsOfContainmentBuilding()";
};

void NuclearPowerPlantSimulator::settingsOfCoolingTower() {

	system("cls");
	std::cout << "Settings of CoolingTower\n";
	while (true) {
		std::cout << "Choose what do you want to do: \n";
		std::cout << "1.Break Machine\n";
		std::cout << "2.Repear Machine\n";
		std::cout << "3.Enter scale Of Cooling\n";
		std::cout << "4.Turn on Machine\n";
		std::cout << "5.Turn off Machine\n";
		std::cout << "6.Back to menu\n";

		int decisionNumber = 1;
		std::cin >> decisionNumber;

		if (decisionNumber == 1) myNuclearPlant.myCoolingTower.breakMachine();
		else if (decisionNumber == 2) myNuclearPlant.myCoolingTower.repearMachine();
		else if (decisionNumber == 3) {
			std::cout << "Enter scaleOfCooling:";
			int scaleOfCooling;
			std::cin >> scaleOfCooling;
			myNuclearPlant.myCoolingTower.setScaleOfCooling(scaleOfCooling);
		}
		else if (decisionNumber == 4) myNuclearPlant.myCoolingTower.turnOnMachine();
		else if (decisionNumber == 5) myNuclearPlant.myCoolingTower.turnOffMachine();
		else if (decisionNumber == 6) return;

		std::cout << "\n";
		system("pause");
		system("cls");
	}

};

void NuclearPowerPlantSimulator::settingsOfTurbineBuilding() {
	system("cls");
	std::cout << "Settings of CoolingTower\n";
	while (true) {
		std::cout << "Choose what do you want to do: \n";
		std::cout << "1.Break Machine\n";
		std::cout << "2.Repear Machine\n";
		std::cout << "3.Turn on Machine\n";
		std::cout << "4.Turn off Machine\n";
		std::cout << "5.Turn on all Turbines\n";
		std::cout << "6.Turn off all Turbines\n";
		std::cout << "7.Back to menu\n";

		int decisionNumber = 1;
		std::cin >> decisionNumber;

		if (decisionNumber == 1) myNuclearPlant.myTurbineBuilding.breakMachine();
		else if (decisionNumber == 2) myNuclearPlant.myTurbineBuilding.repearMachine();
		else if (decisionNumber == 3) myNuclearPlant.myTurbineBuilding.turnOnMachine();
		else if (decisionNumber == 4) myNuclearPlant.myTurbineBuilding.turnOffMachine();
		else if (decisionNumber == 5) myNuclearPlant.myTurbineBuilding.turnOnAllTurbines();
		else if (decisionNumber == 6) myNuclearPlant.myTurbineBuilding.turnOffAllTurbines();
		else if (decisionNumber == 7) return;

		std::cout << "\n";
		system("pause");
		system("cls");
	}
};