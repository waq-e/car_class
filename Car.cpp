//
// Car.cpp created by waqe on 20220315.  &-:
//

#include <iostream>
#include "Car.h"

// Method definitions for the Car class.
void Car::PrintCarData()
{
	cout << "The distance that the " << color << " car " << number << " has traveled is: " << distance << "\n";
}

void Car::IncrementDistance()
{
	distance++;
}