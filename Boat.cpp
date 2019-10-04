//Andres Gonzalez || CEN4020 || Assignment 2

#include "Boat.h"

Boat::Boat()
{ 
    setBrand("Custom");
    setModel("Custom");
    setFuelType("Marine");
    numMotors = 1; //smallest boat allowed is 10ft w/ one motor
    feet = 10;		
}

Boat::Boat(string brand, string model, int mNum, int feet)
{
    setBrand(brand);
    setModel(model);
    setNumMotors(mNum);
    setFeet(feet);
    setFuelType("Marine"); //will always be same fueltype
}

int Boat::getNumMotors()
{ return numMotors; }

void Boat::setNumMotors(int nm)
{   
    if(nm > 1 && nm < 6) //can have a max of 6 motors
    	numMotors = nm;

    else
	numMotors = 6;	//set it to max number of motors allowed
}

int Boat::getFeet()
{ return feet; }

void Boat::setFeet(int ft)
{
    if(ft >= 10 && ft < 40) //Setting max ft at 40, typically any boat
	feet = ft;    	   //larger than that have inboard motors

    else
	feet = 40;
}

double Boat::mileageEstimate(double t)
{ 
    double mileage = 12 * t; //assuming 10 miles per minute (probably not very accurate irl)
    if(getModel() == "Speed boat")
    	mileage += mileage * 0.24; //boost overall speed by 24% if speedboat

    else if(getModel() == "Sail boat")
    	mileage -= mileage * 0.45; //reduce overall speed by 45% if sailboat
 
   return mileage;
}

string Boat::toString()
{ 
    return "-> Boat\n" + PoweredVehicle::toString() + "\n\tNumber of motors: " 
	+ to_string(getNumMotors()) + "\n\tLength: " + to_string(getFeet()) + "ft"; 
}

