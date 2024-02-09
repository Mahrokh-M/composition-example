#include "car.h"

Car::Car(std::string carMake, std::string carModel, Engine carEngine, Transmission carTransmission)
    : make(carMake), model(carModel), engine(carEngine), transmission(carTransmission) {}

void Car::start() {
    std::cout << "Starting the " << make << " " << model << " car." << std::endl;
    engine.start();
}

void Car::stop() {
    std::cout << "Stopping the " << make << " " << model << " car." << std::endl;
    engine.stop();
}

void Car::shiftGear(int newGear) {
    transmission.shiftGear(newGear);
}
