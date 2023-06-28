#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

// List of words for the game
std::vector<std::string> words = {
    "apple",
    "banana",
    "orange",
    "grape",
    "strawberry",
    "watermelon",
    "pineapple",
    "kiwi",
    "mango"
};

// Function to randomly select a word from the list
std::string getRandomWord() {
    srand(time(0));
    int index = rand() % words.size();
    return words[index];
}

// Function to initialize the hidden word with dashes
std::string initializeHiddenWord(const std::string& word) {
    std::string hiddenWord(word.length(), '-');
    return hiddenWord;
}

// Function to update the hidden word with correctly guessed letters
void updateHiddenWord(std::string& hiddenWord, const std::string& word, char guessedLetter) {
    for (int i = 0; i < word.length(); i++) {
        if (word[i] == guessedLetter) {
            hiddenWord[i] = guessedLetter;
        }
    }
}

int main() {
    std::string word = getRandomWord();
    std::string hiddenWord = initializeHiddenWord(word);

    int attempts = 0;
    int maxAttempts = 7;

    std::cout << "Welcome to Hangman!" << std::endl;

    while (attempts < maxAttempts) {
        std::cout << "Guess the word: " << hiddenWord << std::endl;

        char guess;
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        // Check if the guessed letter is in the word
        if (word.find(guess) != std::string::npos) {
            std::cout << "Correct guess!" << std::endl;
            updateHiddenWord(hiddenWord, word, guess);
        } else {
            std::cout << "Wrong guess!" << std::endl;
            attempts++;
        }

        // Check if the word has been completely guessed
        if (hiddenWord == word) {
            std::cout << "Congratulations! You guessed the word: " << word << std::endl;
            break;
        }

        std::cout << "Attempts left: " << maxAttempts - attempts << std::endl;
        std::cout << "---------------------" << std::endl;
    }

    if (attempts >= maxAttempts) {
        std::cout << "Game Over! You couldn't guess the word. The word was: " << word << std::endl;
    }

    return 0;
}
