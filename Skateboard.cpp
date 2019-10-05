#ifndef DRIVINGSIMULATOR_SKATEBOARD_H
#define DRIVINGSIMULATOR_SKATEBOARD_H

#include "Vehicle.h"

class Skateboard : public Vehicle {

Skateboard::Skateboard(string brand, string model)
{
	setBrand(brand);
	setModel(model);	
}

virtual Skateboard::~Skateboard()= default;

virtual double Skateboard::mileageEstimate(double time)
{
	double mileage = (rand() % 5 + 1) / 10;
	
        if(time > 25 && time < 250)
        {
		timeCalc = time/3;
		timeCalc = rand() % timeCalc + 1;
                mileage += mileage + timeCalc;
        }
        return mileage;	
}

};

#endif 
