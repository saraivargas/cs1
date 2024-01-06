#pragma once

#include <string>

#include "Vehicle.h"
using namespace std;

class Truck : public Vehicle {
   private:
    string loadCapacity;

   public:
    Truck(string brand, string color, int speed, string loadCapacity);

    string toString();
};