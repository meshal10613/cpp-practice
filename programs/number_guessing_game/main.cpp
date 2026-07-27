#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int getMaxAttempts(int choice) {
    switch (choice) {
        case 1: return 10;
        case 2: return 7;
        case 3: return 5;
        default: return 7;
    }
}

void playGame() {
    srand(static_cast<unsigned int>(time(0)));

    int secretNum = rand() % 100 + 1; //? Random number between 1 and 100
    int guess = 0;
    int attempts = 0;
    int difficultyChoice = 2;

    cout << "\n===================================\n";
    cout << "   WELCOME TO NUMBER GUESSING!     \n";
    cout << "===================================\n";
    cout << "I'm thinking of a number between 1 and 100.\n\n";

    cout << "Select Difficulty Level:\n";
    cout << "1. Easy (10 attempts)\n";
    cout << "2. Medium (7 attempts)\n";
    cout << "3. Hard (5 attempts)\n";
    cout << "Choice (1-3): ";

    if (!(cin >> difficultyChoice) || difficultyChoice < 1 || difficultyChoice > 3) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid selection! Defaulting to Medium.\n";
        difficultyChoice = 2;
    }

    int maxAttempts = getMaxAttempts(difficultyChoice);
    cout << "\nYou have " << maxAttempts << " attempts to guess the number. Good luck!\n\n";

    while (attempts < maxAttempts) {
        cout << "Attempt " << (attempts + 1) << "/" << maxAttempts << " -> Enter your guess: ";

        if (!(cin >> guess)) {
            cout << "Invalid input! Please enter a number.\n";
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }

        attempts++;

        if (guess == secretNum) {
            cout << "\n🎉 Congratulations! You guessed the number in " << attempts << " attempts!\n";
            return;
        } else if (guess < secretNum) {
            cout << "📈 Too low! Try a higher number.\n\n";
        } else {
            cout << "📉 Too high! Try a lower number.\n\n";
        }
    }

    cout << "\n❌ Game Over! You ran out of attempts. The secret number was: " << secretNum << "\n";
}

int main() {
    char playAgain = 'y';

    do {
        playGame();
        cout << "\nDo you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "\nThanks for playing! Goodbye!\n";
    return 0;
}
