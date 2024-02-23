#include "Cat.h"

Cat::Cat(const std::string& name) : Animal(name) {}

void Cat::eat() {
    std::cout << name << " is eating cat food." << std::endl;
}

void Cat::sleep() {
    std::cout << name << " is sleeping on the windowsill." << std::endl;
}

void Cat::play() {
    std::cout << name << " is chasing a laser pointer." << std::endl;
}
