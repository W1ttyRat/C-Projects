#include <iostream>
using namespace std;

class Machine {
private:
    int id;

public:
    Machine(): id(0) {cout << "Machine no-arg constructor" << endl; }
    Machine(int id): id(id) {cout << "Machine one-arg constructor" << endl; }
    void info() { cout << "ID: " << id << endl; }
};

class Vehicle : public Machine {
public:
    Vehicle() {cout << "Vehicle no-arg constructor" << endl; }
    Vehicle(int id): Machine(id) {cout << "Vehicle one-arg constructor" << endl; }
};

class Car : public Vehicle {
public:
    Car(): Vehicle(999) {cout << "Car no-arg constructor" << endl; }
};

int main() {
    Car car;
    car.info();


    return 0;
}