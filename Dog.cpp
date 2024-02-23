#include "Dog.h"

Dog::Dog(const std::string& name) : Animal(name) {}

void Dog::eat() {
    std::cout << name << " is eating dog food." << std::endl;
}

void Dog::sleep() {
    std::cout << name << " is sleeping in the dog house." << std::endl;
}

void Dog::play() {
    std::cout << name << " is fetching the ball." << std::endl;
}
