//
// Car.h created by waqe on 20220315.  &-:
//


#pragma once

#include <iostream>
#include <string>
using std::string;
using std::cout;

class Car {
public:
	void PrintCarData();
	void IncrementDistance();

	// Using a constructor list in the constructor:
	Car(string c, int n) : color(c), number(n) {}

	// The variables do not need to be accessed outside of
	// functions from this class, so we can set them to private.
private:
	string color;
	int distance = 0;
	int number;
};
