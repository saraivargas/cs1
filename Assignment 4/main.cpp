#include <iostream>
#include <string>

#include "Bike.h"
#include "Car.h"
#include "Truck.h"
#include "Vehicle.h"

using namespace std;

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
