#include <iostream>
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

class Car : public Vehicle {
   private:
    int numDoors;

   public:
    Car(string brand, string color, int speed, int numDoors) {
        this->brand = brand;
        this->color = color;
        this->speed = speed;
        this->numDoors = numDoors;
    }

    string toString() {
        return "Car - Brand: " + brand + ", Color: " + color + ", Max Speed: " + to_string(speed) + ", Doors: " + to_string(numDoors);
    }
};

class Bike : public Vehicle {
   private:
    string type;

   public:
    Bike(string brand, string color, int speed, string type) {
        this->brand = brand;
        this->color = color;
        this->speed = speed;
        this->type = type;
    }

    string toString() {
        return "Bike - Brand: " + brand + ", Color: " + color + ", Max Speed: " + to_string(speed) + ", Type: " + type;
    }
};

class Truck : public Vehicle {
   private:
    string loadCapacity;

   public:
    Truck(string brand, string color, int speed, string loadCapacity) {
        this->brand = brand;
        this->color = color;
        this->speed = speed;
        this->loadCapacity = loadCapacity;
    }

    string toString() {
        return "Truck - Brand: " + brand + ", Color: " + color + ", Max Speed: " + to_string(speed) + ", Load Capacity: " + loadCapacity;
    }
};

int main() {
    Vehicle* vehicles[3] = {
        new Car("Toyota", "Red", 180, 4),
        new Bike("Trek", "Blue", 60, "Mountain"),
        new Truck("Ford", "Black", 140, "5000 lb")};

    for (int i = 0; i < 3; i++) {
        Vehicle* vehicle = vehicles[i];
        cout << vehicle->toString() << endl;
    }

    return 0;
}
