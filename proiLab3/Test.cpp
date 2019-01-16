#include "pch.h"
#include "Test.h"
#include <iostream>

Test::Test()
{
}


Test::~Test()
{
}

void Test::autoTest() {

	std::cout << "NuclearPlantElement:\n";

	std::cout << "myNuclearPlantElement.breakMachine()\n";
	myNuclearPlantElement.breakMachine();
	system("pause");

	std::cout << "myNuclearPlantElement.getTurnOn()\n";
	myNuclearPlantElement.getTurnOn();
	system("pause");

	std::cout << "myNuclearPlantElement.machineWorkCorrectly()\n";
	myNuclearPlantElement.machineWorkCorrectly();
	system("pause");

	std::cout << "myNuclearPlantElement.repearMachine()\n";
	myNuclearPlantElement.repearMachine();
	system("pause");

	std::cout << "	myNuclearPlantElement.turnOffMachine();\n";
	myNuclearPlantElement.turnOffMachine();
	system("pause");

	std::cout << "myNuclearPlantElement.turnOnMachine();\n";
	myNuclearPlantElement.turnOnMachine();
	system("pause");


	std::cout << "\nNuclearPlant:\n";

	std::cout << "myNuclearPlant.everythingWorkCorreclty();\n";
	myNuclearPlant.everythingWorkCorreclty();
	system("pause");

	std::cout << "myNuclearPlant.generateEnergy();\n";
	myNuclearPlant.generateEnergy(1);
	system("pause");

	std::cout << "myNuclearPlant.turnOnAllMachines();\n";
	myNuclearPlant.turnOnAllMachines();
	system("pause");


	std::cout << "\nContainmentBuilding\n";
	
	std::cout << "myContainmentBuilding.allMachinesWorkCorrectly();\n";
	myContainmentBuilding.allMachinesWorkCorrectly();
	system("pause");

	std::cout << "myContainmentBuilding.generatePressure();\n";
	myContainmentBuilding.generatePressure();
	system("pause");

	std::cout << "myContainmentBuilding.getPower();\n";
	myContainmentBuilding.getPower();
	system("pause");

	std::cout << "myContainmentBuilding.getPressure();\n";
	myContainmentBuilding.getPressure();
	system("pause");

	std::cout << "myContainmentBuilding.getTemperatureOfWater();\n";
	myContainmentBuilding.getTemperatureOfWater();
	system("pause");

	std::cout << "myContainmentBuilding.setPower(1);\n";
	myContainmentBuilding.setPower(1);
	system("pause");

	std::cout << "myContainmentBuilding.setPressure(14);\n";
	myContainmentBuilding.setPressure(14);
	system("pause");

	std::cout << "myContainmentBuilding.setTemperatureOfWater(1);\n";
	myContainmentBuilding.setTemperatureOfWater(1);
	system("pause");


	std::cout << "\nFuelAssemblies\n";

	std::cout << "myFuelAssemblies.combastFuel(1);\n";
	myFuelAssemblies.combastFuel(1);
	system("pause");

	std::cout << "myFuelAssemblies.getSpaceForFuel();\n";
	myFuelAssemblies.getSpaceForFuel();
	system("pause");

	std::cout << "myFuelAssemblies.getSupplyOfFuel();\n";
	myFuelAssemblies.getSupplyOfFuel();
	system("pause");

	std::cout << "myFuelAssemblies.setSpaceOfFuel(1);\n";
	myFuelAssemblies.setSpaceOfFuel(1);
	system("pause");

	std::cout << "	myFuelAssemblies.setSupplyOfFuel(1);\n";
	myFuelAssemblies.setSupplyOfFuel(1);
	system("pause");


	std::cout << "\nReactorPressureVessel\n";

	std::cout << "myReactorPressureVessel.generatePressure(1);\n";
	myReactorPressureVessel.generatePressure(1);
	system("pause");

	std::cout << "myReactorPressureVessel.getMaxPressure();\n";
	myReactorPressureVessel.getMaxPressure();
	system("pause");

	std::cout << "myReactorPressureVessel.getPressure();\n";
	myReactorPressureVessel.getPressure();
	system("pause");

	std::cout << "myReactorPressureVessel.setMaxPressure(1);\n";
	myReactorPressureVessel.setMaxPressure(1);
	system("pause");


	std::cout << "\nCoolingTower \n";

	std::cout << "myCoolingTower.coolWater();\n";
	myCoolingTower.coolWater();
	system("pause");

	std::cout << "myCoolingTower.getScaleOfCooling();\n";
	myCoolingTower.getScaleOfCooling();
	system("pause");

	std::cout << "myCoolingTower.setScaleOfCooling(1);\n";
	myCoolingTower.setScaleOfCooling(1);
	system("pause");
	

	std::cout << "\nTurbineBuilding\n";

	std::cout << "myTurbineBuilding.allTurbinesAreTurnOn();\n";
	myTurbineBuilding.allTurbinesAreTurnOn();
	system("pause");

	std::cout << "myTurbineBuilding.allTurbinesWorkCorrectly();\n";
	myTurbineBuilding.allTurbinesWorkCorrectly();
	system("pause");

	std::cout << "myTurbineBuilding.calculateGeneratingPower(1);\n";
	myTurbineBuilding.calculateGeneratingPower(1);
	system("pause");

	std::cout << "myTurbineBuilding.turnOffAllTurbines();\n";
	myTurbineBuilding.turnOffAllTurbines();
	system("pause");

	std::cout << "myTurbineBuilding.turnOnAllTurbines();\n";
	myTurbineBuilding.turnOnAllTurbines();
	system("pause");


	std::cout << "\nTurbine\n";
	
	std::cout << "myTurbine.generatePower(10);\n";
	myTurbine.generatePower(10);
	system("pause");

	std::cout << "	myTurbine.getmaxPowerGenerating();\n";
	myTurbine.getmaxPowerGenerating();
	system("pause");

	std::cout << "myTurbine.setmaxPowerGenerating(142000);\n";
	myTurbine.setmaxPowerGenerating(142000);
	system("pause");
};