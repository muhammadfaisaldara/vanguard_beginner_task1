#include "game.h"

#include <iostream>

void playGame() {
    const int minimum = 1;
    int maximum;

    std::cout << "=== GUESSQUEST ===\n";
    std::cout << "Choose difficulty:\n";
    std::cout << "1. Easy (1-10)\n";
    std::cout << "2. Medium (1-20)\n";
    std::cout << "3. Hard (1-100)\n";
    std::cout << "Enter choice: ";

    int difficulty;
    if (!(std::cin >> difficulty)) {
        std::cout << "Invalid input. Ending the game.\n";
        return;
    }

    if (difficulty == 1) {
        maximum = 10;
    } else if (difficulty == 2) {
        maximum = 20;
    } else if (difficulty == 3) {
        maximum = 100;
    } else {
        std::cout << "Invalid difficulty choice.\n";
        return;
    }

    const int target = randomNumber(minimum, maximum);

    std::cout << "\nI'm thinking of a number between " << minimum
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
        if (guess < target) {
            std::cout << "Too low!\n\n";
        } else {
            std::cout << "Too high!\n\n";
        }
    }
}
