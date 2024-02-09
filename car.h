#pragma once
#include <iostream>
#include <string>
#include "engine.h"
#include "transmission.h"

class Car {
private:
    std::string make;
    std::string model;
    Engine engine;
    Transmission transmission;

public:
    Car(std::string carMake, std::string carModel, Engine carEngine, Transmission carTransmission);

    void start();

    void stop();

    void shiftGear(int newGear);
};


