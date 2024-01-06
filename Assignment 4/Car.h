#pragma once

#include <string>

#include "Vehicle.h"
using namespace std;

class Car : public Vehicle {
   private:
    int numDoors;

   public:
    Car(string brand, string color, int speed, int numDoors);

    string toString();
};