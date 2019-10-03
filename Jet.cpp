// Andres Gonzalez || CEN4020 || Assignment 2

#include "Jet.h"
#include <ctime> //for srand() and rand()	
#include <cstdlib> //for time()

Jet::Jet() 
{
    numberOfEngines = 1;
}

Jet::Jet(int numEngines, string fuelType) 
{
    setEngineNum(numEngines);
    setFuelType(fuelType);
}

Jet::~Jet() = default;

int Jet::getEngineNum() 
{
    return numberOfEngines;
}

void Jet::setEngineNum(int numEng) 
{
    if (numEng > 0 && numEng <= 5) 
    {
        numberOfEngines = numEng;
    } 
    else 
    {
        numberOfEngines = 1;
    }
}

double Jet::mileageEstimate(double t) 
{
    srand(time(0));
    int r = rand() % 100 + 40;
    double mileage = r * t;
    if (numberOfEngines < 2) 
    {
        mileage += mileage * 0.055;
    }
    return mileage;
}

string Jet::toString() 
{
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of Engines: "
	 + to_string(getEngineNum());
}
