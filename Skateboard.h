#ifndef DRIVINGSIMULATOR_SKATEBOARD_H
#define DRIVINGSIMULATOR_SKATEBOARD_H

#include "Vehicle.h"

class Skateboard : public Vehicle 
{
    private:
	string brand;

    public:
	Skateboard();
	explicit Skateboard(string); //takes in a skateboard brand

	virtual ~Skateboard();
	virtual string getBrand();
	virtual double mileageEstimate(double);
	virtual string toString();
};

#endif 


