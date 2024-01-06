#pragma once

#include <string>

#include "Vehicle.h"
using namespace std;

class Bike : public Vehicle {
   private:
    string type;

   public:
    Bike(string brand, string color, int speed, string type);

    string toString();
};