#include "Jet.h"

Jet::Jet()
{
	numberOfEngines = 1;
	setBrand("Custom");
	setModel("VTx");
}


Jet::Jet(string brand, string model, string fuelType, int numEng)
{
	setBrand(brand);
	setModel(model);
	setFuelType(fuelType);
	setNumOfEngines(numEng);
}


Jet::~Jet() = default;

int Jet::getNumberOfEngines()
{
	return numberOfEngines;
}


double Jet::mileageEstimate(double time)
{
	double mileage = rand() % 41 + 60;
	if(fuelType == "Rocket" && numberOfEngines >= 2)
	{
		mileage += mileage * (0.055 * numberOfEngines);
	}
	return mileage;
}





