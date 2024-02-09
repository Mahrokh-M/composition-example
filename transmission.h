#pragma once
#include <iostream>
#include <string>

class Transmission {
private:
    std::string type;
    int gear;

public:
    Transmission(std::string transType);

    void shiftGear(int newGear);
};



