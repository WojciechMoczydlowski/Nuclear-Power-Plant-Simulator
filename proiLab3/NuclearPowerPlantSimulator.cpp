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
		std::cout << "3.Show all parameters\n";
		std::cout << "4.Settings of ContainmentBuilding\n";
		std::cout << "5.Settings of CoolingTower\n";
		std::cout << "6.Settings of TurbineBuilding\n";
		std::cout << "7.Exit\n";

		int decisionNumber = 1;
		std::cin >> decisionNumber;

		if (decisionNumber == 1) {
			std::cout << myNuclearPlant.generateEnergy(power);
		}
		else if (decisionNumber == 2) changePower();
		else if (decisionNumber == 3) showAllParameters();
		else if (decisionNumber == 4) settingsOfContainmentBuilding();
		else if (decisionNumber == 5) settingsOfCoolingTower();
		else if (decisionNumber == 6) settingsOfTurbineBuilding();
		else if (decisionNumber == 7) return;

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

void NuclearPowerPlantSimulator::showAllParameters() {


	std::cout << "ContainmentBuilding: \n";

	if (myNuclearPlant.myContainmentBuilding.getTurnOn())std::cout << "On\n";
	else std::cout << "Off\n";
	if (myNuclearPlant.myContainmentBuilding.machineWorkCorrectly())std::cout << "Work correctly\n";
	else std::cout << "Broken\n";
	std::cout<< "Power: " << myNuclearPlant.myContainmentBuilding.getPower()<< "\n";
	std::cout << "Pressure: " << myNuclearPlant.myContainmentBuilding.getPressure() << "\n";
	std::cout << "Temperature of Water: " << myNuclearPlant.myContainmentBuilding.getTemperatureOfWater() << "\n";


	std::cout << "\nFuelAssemblies: \n";

	if(myNuclearPlant.myContainmentBuilding.myFuelAssemblies.getTurnOn()) std::cout << "On\n";
	else std::cout << "Off\n";
	if (myNuclearPlant.myContainmentBuilding.myFuelAssemblies.machineWorkCorrectly())std::cout << "Work correctly\n";
	else std::cout << "Broken\n";
	std::cout << "Suppy of fuel: " << myNuclearPlant.myContainmentBuilding.myFuelAssemblies.getSupplyOfFuel() << "\n";
	std::cout << "Space for fuel: " << myNuclearPlant.myContainmentBuilding.myFuelAssemblies.getSpaceForFuel() << "\n";


	std::cout << "\nReactorPressureVessel: \n";

	if (myNuclearPlant.myContainmentBuilding.myReactorPressureVessel.getTurnOn()) std::cout << "On\n";
	else std::cout << "Off\n";
	if (myNuclearPlant.myContainmentBuilding.myReactorPressureVessel.machineWorkCorrectly())std::cout << "Work correctly\n";
	else std::cout << "Broken\n";
	std::cout << "Max pressure: " << myNuclearPlant.myContainmentBuilding.myReactorPressureVessel.getMaxPressure() << "\n";
	
	
	std::cout << "\nCoolingTower: \n";

	if (myNuclearPlant.myCoolingTower.getTurnOn()) std::cout << "On\n";
	else std::cout << "Off\n";
	if (myNuclearPlant.myCoolingTower.machineWorkCorrectly())std::cout << "Work correctly\n";
	else std::cout << "Broken\n";
	std::cout << "Scale of cooling: " << myNuclearPlant.myCoolingTower.getScaleOfCooling() << "\n";


	std::cout << "\nTurbineBuilding: \n";

	if (myNuclearPlant.myTurbineBuilding.getTurnOn()) std::cout << "On\n";
	else std::cout << "Off\n";
	if (myNuclearPlant.myTurbineBuilding.machineWorkCorrectly())std::cout << "Work correctly\n";
	else std::cout << "Broken\n";
	if (myNuclearPlant.myTurbineBuilding.allTurbinesWorkCorrectly())std::cout << "All turbines work correctly\n";
	else std::cout << "Turbines are broken\n";
	myNuclearPlant.myTurbineBuilding.allTurbinesAreTurnOn();
	if (myNuclearPlant.myTurbineBuilding.allTurbinesAreTurnOn())std::cout << "All turbines are on\n";
	else std::cout << "Turbines are off\n";
};

void NuclearPowerPlantSimulator::settingsOfContainmentBuilding() {
	std::cout << "settingsOfContainmentBuilding()";

	system("cls");
	std::cout << "Settings of containmentBuilding\n";
	while (true) {
		std::cout << "Choose what do you want to do: \n";
		std::cout << "1.Break Machine\n";
		std::cout << "2.Repear Machine\n";
		std::cout << "3.Turn on Machine\n";
		std::cout << "4.Turn off Machine\n";
		std::cout << "5.Turn on all Machines\n";
		std::cout << "6.Turn off all Machines\n";
		std::cout << "7.Show space for fuel\n";
		std::cout << "8.Change space for fuel\n";
		std::cout << "9.Show supply of fuel\n";
		std::cout << "10.Change supply of fuel\n";
		std::cout << "11.Show max pressure\n";
		std::cout << "12.Change max pressure\n";
		std::cout << "13.Back to menu\n";

		int decisionNumber = 1;
		std::cin >> decisionNumber;

		if (decisionNumber == 1) myNuclearPlant.myContainmentBuilding.breakMachine();
		else if (decisionNumber == 2) myNuclearPlant.myContainmentBuilding.repearMachine();
		else if (decisionNumber == 3) myNuclearPlant.myContainmentBuilding.turnOnMachine();
		else if (decisionNumber == 4) myNuclearPlant.myContainmentBuilding.turnOffMachine();
		else if (decisionNumber == 5) myNuclearPlant.myContainmentBuilding.turnOnMachines();
		else if (decisionNumber == 6) myNuclearPlant.myContainmentBuilding.turnOffMachines();
		else if (decisionNumber == 7) std::cout << myNuclearPlant.myContainmentBuilding.myFuelAssemblies.getSpaceForFuel();
		else if (decisionNumber == 8) {
			std::cout << "Enter space of fuel:";
			int spaceOfFuel;
			std::cin >> spaceOfFuel;
			myNuclearPlant.myContainmentBuilding.myFuelAssemblies.setSpaceOfFuel(spaceOfFuel);
		}
		else if (decisionNumber == 9) std::cout<<myNuclearPlant.myContainmentBuilding.myFuelAssemblies.getSupplyOfFuel();
		else if (decisionNumber == 10) {
			std::cout << "Enter supply of fuel:";
			int supplyOfFuel;
			std::cin >> supplyOfFuel;
			myNuclearPlant.myContainmentBuilding.myFuelAssemblies.setSupplyOfFuel(supplyOfFuel);
		}
		else if (decisionNumber == 11) std::cout << myNuclearPlant.myContainmentBuilding.myReactorPressureVessel.getMaxPressure();
		else if (decisionNumber == 12) {
			std::cout << "Enter maxPressure:";
			int maxPressure;
			std::cin >> maxPressure;
			myNuclearPlant.myContainmentBuilding.myReactorPressureVessel.setMaxPressure(maxPressure);
		}
		else if (decisionNumber == 13) return;
		std::cout << "\n";
		system("pause");
		system("cls");
	}
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