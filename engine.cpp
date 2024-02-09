#include "engine.h"

Engine::Engine(std::string engineType, int hp) : type(engineType), horsepower(hp), isRunning(false) {}

void Engine::start() {
    if (!isRunning) {
        isRunning = true;
        std::cout << "Engine started." << std::endl;
    }
}

void Engine::stop() {
    if (isRunning) {
        isRunning = false;
        std::cout << "Engine stopped." << std::endl;
    }
}
