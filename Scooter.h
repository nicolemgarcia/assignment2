#ifndef DRIVINGSIMULATOR_SCOOTER_H
#define DRIVINGSIMULATOR_SCOOTER_H

#include "PoweredVehicle.h"

class Scooter : public PoweredVehicle {

private:
    string state;

public:
    Scooter();

    explicit Scooter(string brand, string model, string state)

    virtual ~Scooter();
    string setState(string state);
    int getStateMPH(string state); //returns state limit
    virtual double mileageEstimate(double time, string state);
};


#endif //DRIVINGSIMULATOR_SCOOTER_H
