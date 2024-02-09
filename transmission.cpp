#include "transmission.h"

Transmission::Transmission(std::string transType) : type(transType), gear(0) {}

void Transmission::shiftGear(int newGear) {
    gear = newGear;
    std::cout << "Shifted to gear " << gear << std::endl;
}
