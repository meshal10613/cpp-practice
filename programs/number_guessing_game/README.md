# Number Guessing Game

This directory contains the C++ source code for the **Number Guessing Game** program.

## Goal
A console game where the user guesses a secret number with difficulty levels, limited attempts, and input sanitization.

## Step-by-Step Execution
1. In `main()`, enters a `do-while` loop that handles replay requests.
2. Calls [playGame](file:///e:/C++/cpp-practice/programs/number_guessing_game/main.cpp#L16) to start a round.
3. In `playGame()`, seeds the random number generator using the system clock (`srand(time(0))`) and generates a random number between 1 and 100 (`rand() % 100 + 1`).
4. Displays a menu to select difficulty: Easy (10 attempts), Medium (7 attempts), or Hard (5 attempts).
5. Validates difficulty choice. If the user inputs an invalid choice or a non-integer, it clears the stream error state, discards invalid characters, alerts the user, and defaults to Medium.
6. Enters a `while` loop that runs until `attempts` reaches the maximum attempts allowed.
7. Asks the player for a guess. If the input is not a number, it handles the error state, clears the input buffer, and continues.
8. Increments `attempts` and compares `guess` to the secret number:
   - If correct, displays a success message with the number of attempts and returns.
   - If the guess is too low, prints a hint to go higher.
   - If the guess is too high, prints a hint to go lower.
9. If attempts run out without a correct guess, displays "Game Over" and reveals the secret number.
10. Back in `main()`, prompts the player if they want to play again (`y/n`). It loops back if the answer is `'y'` or `'Y'`.

## Code Reference
- [main.cpp](main.cpp)

## How to Compile & Run
To compile and run this program, follow these instructions:

### Prerequisites
Make sure you have a C++ compiler (like `g++`) installed on your system.

### 1. Compile the Program
Navigate to this directory in your terminal and compile the program:
```bash
g++ main.cpp -o main
```

### 2. Run the Executable
- **Windows:**
  ```powershell
  ./main
  ```
- **Linux / macOS:**
  ```bash
  ./main
  ```
