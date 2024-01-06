#include "Car.h"

Car::Car(string brand, string color, int speed, int numDoors) {
    this->brand = brand;
    this->color = color;
    this->speed = speed;
    this->numDoors = numDoors;
}

string Car::toString() {
    return "Car - Brand: " + brand + ", Color: " + color + ", Max Speed: " + to_string(speed) + ", Doors: " + to_string(numDoors);
}