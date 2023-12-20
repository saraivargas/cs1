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

class Car: public Vehicle {
    public:
        int numDoors;
        void setbType(int bType) {
      bType = bType;

class Bike: public Vehicle {
    public:
        string bType;

class Truck: public Vehicle {
    public:
        string loadC;

};

int main() {
    Programmer myObj;
     myObj.setSalary(50000);
     myObj.bonus = 15000;
     cout << "Salary: " << myObj.getSalary() << "\n";
    cout << "Bonus: " << myObj.bonus << "\n";
    return 0;
}