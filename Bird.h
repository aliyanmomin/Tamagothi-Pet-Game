#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

class Bird : public Animal {
public:
    Bird(const std::string& name);

    void eat() override;
    void sleep() override;
    void play() override;
};

#endif // BIRD_H
