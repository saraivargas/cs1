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
        
}

};

int main() {
    return 0;
}