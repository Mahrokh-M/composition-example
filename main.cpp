#include <iostream>
#include "engine.h"
#include "transmission.h"
#include "car.h"

int main() {
    Engine myEngine("V6", 300);
    Transmission myTransmission("Automatic");
    Car myCar("Toyota", "Camry", myEngine, myTransmission);

    myCar.start();
    myCar.shiftGear(1);
    myCar.stop();

    return 0;
}
