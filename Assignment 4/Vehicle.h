#pragma once

#include <string>
using namespace std;

class Vehicle {
   protected:
    string brand;
    string color;
    int speed;

   public:
    virtual string toString() = 0;
};