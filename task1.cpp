#include <iostream>
#include <cstdlib>
#include <ctime>
int main() {
    std::srand(std::time(0));
    int randomNumber = std::rand() % 100 + 1;
    int userGuess;
    int attempts = 0;
    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    do {
        std::cout << "Guess the number between 1 and 100: ";
        std::cin >> userGuess;
        attempts++;
        if (userGuess > randomNumber) {
            std::cout << "Try a lower number." << std::endl;
        } else if (userGuess < randomNumber) {
            std::cout << "Try a higher number." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the number " << randomNumber
                      << " correctly in " << attempts << " attempts." << std::endl;
        }
    } while (userGuess != randomNumber);
    return 0;
}
