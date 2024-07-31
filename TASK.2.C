// TASK 2
// NUMBER GUSESSING GAME

/*Create a program that generates a random number and asks the
user to guess it. Provide feedback on whether the guess is too
high or too low until the user guesses the correct number.*/

/* NUMBER GUWSSING GAME */


#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0)); // Seed the random number generator
    int secretNumber = rand() % 100 + 1;                         // Generate a secret number between 1 and 100

    int guess;
    int attempts = 0;
    const int maxAttempts = 10;                                 // You can adjust this based on difficulty

    std::cout << "Number Guessing Game!" << std::endl;
    std::cout << "Try to guess the secret number between 1 and 100." << std::endl;

    while (attempts < maxAttempts) {
        std::cout << "Attempt #" << attempts + 1 << ": Enter your guess no: ";
        std::cin >> guess;

        if (guess == secretNumber) {
            std::cout << "Congratulations! You guessed it right!" << std::endl;
            break;
        } else if (guess < secretNumber) {
            std::cout << "Too low! Try a higher number." << std::endl;
        } else {
            std::cout << "Too high! Try a lower number." << std::endl;
        }

        attempts++;
    }

    if (attempts == maxAttempts) {
        std::cout << "Sorry, you've reached the maximum number of attempts." << std::endl;
        std::cout << "The secret number was " << secretNumber << "." << std::endl;
    }

    return 0;
}




