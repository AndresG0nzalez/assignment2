//Andres Gonzalez || CEN4020 || Assignment 2

#ifndef DRIVINGSIMULATOR_BOAT_H
#define DRIVINGSIMULATOR_BOAT_H

#include "PoweredVehicle.h"

class Boat : public PoweredVehicle
{
    protected:
	int numMotors, feet; //assuming boats have outboard motors

    public:
	Boat();
	
	explicit Boat(string, string, int, int); //take a brand, model, number of motors,
	int getNumMotors();			 //and length.
	void setNumMotors(int);
	int getFeet();
	void setFeet(int);
	virtual double mileageEstimate(double);
	virtual string toString();
};

#endif
