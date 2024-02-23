#ifndef GAME_H
#define GAME_H

#include "Animal.h"
#include <vector>
#include <memory>

class Game {
public:
    void addAnimal(std::unique_ptr<Animal> animal);
    void play();

private:
    std::vector<std::unique_ptr<Animal> > animals;
};

#endif // GAME_H
