#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog : public Animal {
public:
    Dog(const std::string& name);

    void eat() override;
    void sleep() override;
    void play() override;
};

#endif // DOG_H
