#include "game.h"

#include <iostream>

void playGame() {
    const int minimum = 1;
    const int maximum = 20;
    const int target = randomNumber(minimum, maximum);

    std::cout << "=== GUESSQUEST ===\n";
    std::cout << "I'm thinking of a number between " << minimum
              << " and " << maximum << ".\n\n";

    int attemptsRemaining = 5;
    while (true) {
        std::cout << "Attempts remaining: " << attemptsRemaining << '\n';
        std::cout << "Your guess: ";
        int guess;
        if (!(std::cin >> guess)) {
            std::cout << "\nNo integer read. Ending the game.\n";
            return;
        }

        if (guess == target) {
            std::cout << "You win!\n";
            return;
        }

        --attemptsRemaining;
        if (attemptsRemaining == 0) {
            std::cout << "You lose! The number was " << target << ".\n";
            return;
        }
        std::cout << "Try again!\n\n";
    }
}
