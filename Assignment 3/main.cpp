#include <iostream>
#include <string>
using namespace std;

class Vehicle {
    protected:
        string brand;
        string color;
        int speed;

    public:
        virtual toString show() = 0;
};

class Car: public Vehicle {
    private:
        int numDoors;

    public:
        string toString() {
            return "Car - Brand: Toyota, Color: Red, Max Speed: 180, Doors: 4";
        }
};

int main() {
    return 0;
}