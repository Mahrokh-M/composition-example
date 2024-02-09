#pragma once
#include <iostream>
#include <string>

class Engine {
private:
    std::string type;
    int horsepower;
    bool isRunning;

public:
    Engine(std::string engineType, int hp);

    void start();

    void stop();
};

