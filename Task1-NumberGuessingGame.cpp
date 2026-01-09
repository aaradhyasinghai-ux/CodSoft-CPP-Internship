#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int secretNumber, guess;

    // Seed random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    secretNumber = rand() % 100 + 1;

    cout << "Welcome to the Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;

    // Loop until correct guess
    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number." << endl;
            break;
        }
    }

    return 0;
}
