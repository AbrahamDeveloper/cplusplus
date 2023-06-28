#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0)); // Seed the random number generator with current time

    std::cout << "Let's play Rock, Paper, Scissors!" << std::endl;

    std::cout << "Enter your move (1: Rock, 2: Paper, 3: Scissors): ";
    int playerMove;
    std::cin >> playerMove;

    // Generate a random move for the computer
    int computerMove = rand() % 3 + 1;

    // Display the player's move
    std::cout << "Player's move: ";
    switch (playerMove) {
        case 1:
            std::cout << "Rock";
            break;
        case 2:
            std::cout << "Paper";
            break;
        case 3:
            std::cout << "Scissors";
            break;
        default:
            std::cout << "Invalid move";
            return 0;
    }
    std::cout << std::endl;

    // Display the computer's move
    std::cout << "Computer's move: ";
    switch (computerMove) {
        case 1:
            std::cout << "Rock";
            break;
        case 2:
            std::cout << "Paper";
            break;
        case 3:
            std::cout << "Scissors";
            break;
    }
    std::cout << std::endl;

    // Determine the winner
    if (playerMove == computerMove) {
        std::cout << "It's a tie!" << std::endl;
    } else if ((playerMove == 1 && computerMove == 3) ||
               (playerMove == 2 && computerMove == 1) ||
               (playerMove == 3 && computerMove == 2)) {
        std::cout << "Player wins!" << std::endl;
    } else {
        std::cout << "Computer wins!" << std::endl;
    }

    return 0;
}
