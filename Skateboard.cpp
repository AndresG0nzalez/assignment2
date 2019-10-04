//Andres Gonzalez || CEN4020 || Assignment 2

#include "Skateboard.h"
#include <cmath>
#include <iomanip>
#include <random> //for random_device, default_random_engine,
		  //and uniform_real_distribution

Skateboard::Skateboard()
{ brand = "unknown"; }

Skateboard::Skateboard(string brand)
{ setBrand(brand); }

Skateboard::~Skateboard() = default;

string Skateboard::getBrand()
{ return brand; }

double Skateboard::mileageEstimate(double t)
{
    //Code segment taken from Stackoverflow
    random_device r1;
    default_random_engine generator(r1()); 
    uniform_real_distribution<double> distribution(0.1, 0.5);
    double ranNum = distribution(generator);
    //Question topic: "c++ create a random decimal between 0.1 and 10"

    double mileage = ranNum * t;
    if(t > 25 && t < 250)
    {
	double frac = t/3;		
    	random_device r2;
	default_random_engine generator(r2());
        uniform_real_distribution<double> distribution(1.0, frac); //num between 1 and 1/3 of time
	double ranNum2 = distribution(generator);
	mileage += ranNum2;
    }
    return mileage;
}

string Skateboard::toString()
{ return "-> Skateboard\n" + Vehicle::toString(); } 
