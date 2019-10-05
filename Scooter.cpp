#include "Scooter.h"

Scooter::Scooter()
{
	setBrand("Custom");
	setModel("VTx");
}

Scooter::Scooter(string brand, string model, string state)
{
	setBrand(brand);
	setModel(model);
	setState(state);
}

virtual Scooter:: ~Scooter()= default;

int Scooter::getStateMPH(string state)
{
	//based on the state, returns the 
	//state law limit of the scooter
	return limit;
}
    
virtual double Scooter::mileageEstimate(double time, string state)
{
	limit = getStateMPH(state);
	mileage = rand() % limit;
}

