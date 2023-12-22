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
    return "Car - Brand: Toyota, Color: Red, Max Speed: 180, Doors: 4";
  }
};

int main() {
  //   Car carObj1("BMW", "X5", 1999);
  //   Car carObj2("Ford", "Mustang", 1969);

  return 0;
}