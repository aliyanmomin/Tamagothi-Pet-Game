#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal {
public:
    Animal(const std::string& name);
    virtual ~Animal();

    virtual void eat() = 0;
    virtual void sleep() = 0;
    virtual void play() = 0;
    std::string getName() const; // Getter for the name

protected:
    std::string name;
};

#endif // ANIMAL_H
