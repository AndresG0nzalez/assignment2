//Andres Gonzalez || CEN4020 || Assignment 2

#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle {

private:
    int numberOfEngines;

public:
    Jet();

    explicit Jet(string, string, string, int);

    virtual ~Jet();
    int getEngineNum();
    void setEngineNum(int);
    virtual double mileageEstimate(double time);
    virtual string toString();
};

#endif 

