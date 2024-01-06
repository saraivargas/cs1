
#include "Bike.h"

Bike::Bike(string brand, string color, int speed, string type) {
    this->brand = brand;
    this->color = color;
    this->speed = speed;
    this->type = type;
}

string Bike::toString() {
    return "Bike - Brand: " + brand + ", Color: " + color + ", Max Speed: " + to_string(speed) + ", Type: " + type;
}