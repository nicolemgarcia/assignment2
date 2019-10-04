// Created by Nicole Garcia on 10/4/19


#ifndef DRIVINGSIMULATOR_SKATEBOARD_H
#define DRIVINGSIMULATOR_SKATEBOARD_H

#include "Vehicle.h"

class Skateboard : public Vehichle {


public:
        explicit Skateboard(string brand, string model, string fuelType, int numberOfEngines);
        virtual ~Skateboard();
        int getNumOfEngines();
        void setNumberOfEngines(int numberOfEngines);
        virtual double mileageEstimate(double time);

};

#endif //DRIVINGSIMULATOR_SKATEBOARD_H
