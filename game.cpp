#include "game.h"
#include <iostream>
#include <limits>
#include <typeinfo>

void Game::addAnimal(std::unique_ptr<Animal> animal) {
    animals.push_back(std::move(animal));
}

void Game::play() {
    char choice;
    do {
        std::cout << "\nChoose an animal to interact with:\n";
        for (size_t i = 0; i < animals.size(); ++i) {
            std::cout << i + 1 << ". " << animals[i]->getName() << "\n";
        }
        std::cout << "Enter q to quit.\n";
        std::cin >> choice;

        if (choice == 'q' || choice == 'Q') break;

        int index = choice - '1';
        if (index >= 0 && static_cast<size_t>(index) < animals.size()) {
            std::cout << "What should " << animals[index]->getName() << " do?\n";
            std::cout << "1. Eat\n2. Sleep\n3. Play\nEnter your choice: ";
            int action;
            std::cin >> action;

            // Check if the input action is valid
            if (!std::cin || action < 1 || action > 3) {
                std::cout << "Invalid action. Please try again.\n";
                // Clear the error flag on cin
                std::cin.clear();
                // Ignore the rest of the input buffer
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                continue;
            }

            // Call the appropriate action
            switch (action) {
                case 1:
                    animals[index]->eat();
                    break;
                case 2:
                    animals[index]->sleep();
                    break;
                case 3:
                    animals[index]->play();
                    break;
                default:
                    std::cout << "Unknown action.\n";
                    break;
            }
        } else {
            std::cout << "Invalid choice. Please try again.\n";
        }

        // Ignore the rest of the input buffer
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    } while (true);
}
