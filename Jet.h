// Created by Nicole Garcia on 10/4/19


#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"

class Jet : public PoweredVehichle {

private:
	int numberOfEngines;

public:
	explicit Jet(string brand, string model, string fuelType, int numberOfEngines);
	virtual ~Jet();
	int getNumOfEngines();
	virtual double mileageEstimate(double time);

};

#endif //DRIVINGSIMULATOR_JET_H
