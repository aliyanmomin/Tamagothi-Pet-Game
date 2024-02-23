#include "Bird.h"

Bird::Bird(const std::string& name) : Animal(name) {}

void Bird::eat() {
    std::cout << name << " is pecking at some seeds." << std::endl;
}

void Bird::sleep() {
    std::cout << name << " is sleeping in the nest." << std::endl;
}

void Bird::play() {
    std::cout << name << " is playing with a mirror." << std::endl;
}
