#include "Truck.h"

Truck::Truck(string brand, string color, int speed, string loadCapacity) {
    this->brand = brand;
    this->color = color;
    this->speed = speed;
    this->loadCapacity = loadCapacity;
}

string Truck::toString() {
    return "Truck - Brand: " + brand + ", Color: " + color + ", Max Speed: " + to_string(speed) + ", Load Capacity: " + loadCapacity;
}