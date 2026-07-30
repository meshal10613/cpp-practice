# C++ Practice Programs

A curated collection of basic C++ programs, designed for learning and practicing foundational programming concepts such as conditionals, loops, basic math, array searching algorithms, and interactive applications.

Each program is organized into its own dedicated subdirectory containing a `main.cpp` source file.

---

## Directory Structure

All programs are located under the `programs/` directory:

```text
cpp-practice/
├── README.md
└── programs/
    ├── 2d_array/
    │   └── main.cpp
    ├── area_of_rectangle/
    │   └── main.cpp
    ├── armstrong_number/
    │   └── main.cpp
    ├── average_of_three/
    │   └── main.cpp
    ├── biggest_of_three/
    │   └── main.cpp
    ├── electricity_bill_calculator/
    │   └── main.cpp
    ├── even_odd/
    │   └── main.cpp
    ├── leap_year/
    │   └── main.cpp
    ├── linear_search/
    │   └── main.cpp
    ├── linear_search_algorithm_for_a_2d_array/
    │   └── main.cpp
    ├── main/
    │   └── main.cpp
    ├── number_guessing_game/
    │   └── main.cpp
    ├── palidrom_number/
    │   └── main.cpp
    ├── positive_negative_zero/
    │   └── main.cpp
    ├── quiz_test_system/
    │   └── main.cpp
    ├── reverse_a_number/
    │   └── main.cpp
    ├── simple_calculator/
    │   └── main.cpp
    ├── snake_game/
    │   └── main.cpp
    ├── square_of_number/
    │   └── main.cpp
    ├── swap_numbers/
    │   └── main.cpp
    ├── tic_tac_toe/
    │   └── main.cpp
    └── vowel_consonant/
        └── main.cpp
```

---

## Available Programs

Below is a list of all the practice programs available in this repository:

| Program Name | Description | Source Code |
| :--- | :--- | :--- |
| **2D Array** | Declares a 2D array of user-defined size, takes input for its elements, and displays the array. | [main.cpp](file:///e:/C++/cpp-practice/programs/2d_array/main.cpp) |
| **Area of Rectangle** | Computes the area of a rectangle given its length and width. | [main.cpp](file:///e:/C++/cpp-practice/programs/area_of_rectangle/main.cpp) |
| **Armstrong Number** | Checks whether a given non-negative integer is an Armstrong number. | [main.cpp](file:///e:/C++/cpp-practice/programs/armstrong_number/main.cpp) |
| **Average of Three** | Calculates the average of three input numbers. | [main.cpp](file:///e:/C++/cpp-practice/programs/average_of_three/main.cpp) |
| **Biggest of Three** | Compares three numbers and outputs the largest one. | [main.cpp](file:///e:/C++/cpp-practice/programs/biggest_of_three/main.cpp) |
| **Electricity Bill Calculator** | Calculates electricity bill based on tiered unit consumption rates, fixed fee, and VAT. | [main.cpp](file:///e:/C++/cpp-practice/programs/electricity_bill_calculator/main.cpp) |
| **Even or Odd** | Checks if an integer entered by the user is even or odd. | [main.cpp](file:///e:/C++/cpp-practice/programs/even_odd/main.cpp) |
| **Leap Year Checker** | Determines whether a given year is a leap year. | [main.cpp](file:///e:/C++/cpp-practice/programs/leap_year/main.cpp) |
| **Linear Search** | Searches for a target element in a 1D array using the linear search algorithm. | [main.cpp](file:///e:/C++/cpp-practice/programs/linear_search/main.cpp) |
| **Linear Search (2D Array)** | Searches for a target element in a 2D matrix and displays its row and column indices. | [main.cpp](file:///e:/C++/cpp-practice/programs/linear_search_algorithm_for_a_2d_array/main.cpp) |
| **Hello World (Main)** | A simple template program that outputs "Hello, World!". | [main.cpp](file:///e:/C++/cpp-practice/programs/main/main.cpp) |
| **Number Guessing Game** | Interactive console game where players guess a random number (1-100) with difficulty levels. | [main.cpp](file:///e:/C++/cpp-practice/programs/number_guessing_game/main.cpp) |
| **Palindrome Number** | Checks if an integer reads the same forwards and backwards. | [main.cpp](file:///e:/C++/cpp-practice/programs/palidrom_number/main.cpp) |
| **Positive Negative Zero** | Identifies if a number is positive, negative, or zero. | [main.cpp](file:///e:/C++/cpp-practice/programs/positive_negative_zero/main.cpp) |
| **Quiz Test System** | Interactive console-based multiple-choice quiz system with score tracking, negative marking, and performance evaluation. | [main.cpp](file:///e:/C++/cpp-practice/programs/quiz_test_system/main.cpp) |
| **Reverse a Number** | Reverses the digits of an integer using mathematical and string-reversal methods. | [main.cpp](file:///e:/C++/cpp-practice/programs/reverse_a_number/main.cpp) |
| **Simple Calculator** | Implements basic arithmetic operations (`+`, `-`, `*`, `/`) using a switch case. | [main.cpp](file:///e:/C++/cpp-practice/programs/simple_calculator/main.cpp) |
| **Snake Game** | A console-based implementation of the classic Snake game using WASD or arrow keys, screen clearing, and fruit spawning. | [main.cpp](file:///e:/C++/cpp-practice/programs/snake_game/main.cpp) |
| **Square of a Number** | Computes and displays the square of an input integer. | [main.cpp](file:///e:/C++/cpp-practice/programs/square_of_number/main.cpp) |
| **Swap Numbers** | Swaps the values of two variables without using a temporary helper variable. | [main.cpp](file:///e:/C++/cpp-practice/programs/swap_numbers/main.cpp) |
| **Tic Tac Toe** | A 2-player console-based Tic Tac Toe game played on a 3x3 grid with win/draw detection and screen clearing. | [main.cpp](file:///e:/C++/cpp-practice/programs/tic_tac_toe/main.cpp) |
| **Vowel or Consonant** | Checks if an input alphabet character is a vowel or a consonant. | [main.cpp](file:///e:/C++/cpp-practice/programs/vowel_consonant/main.cpp) |

---

## Detailed Step-by-Step Code Explanations

Here is a step-by-step explanation of how the source code in each program's `main.cpp` executes.

### 1. [2D Array](file:///e:/C++/cpp-practice/programs/2d_array/main.cpp)
* **Goal**: Dynamically prompt the user for matrix dimensions and elements, then display the resulting 2D grid.
* **Step-by-Step Execution**:
  1. Declares integers `row`, `column`, `i`, and `j` to store array dimensions and loop counters.
  2. Prompts the user to enter the number of rows and columns, saving them via `cin`.
  3. Declares a fixed-size 2D array `arr[100][100]` to hold up to 10,000 integer elements.
  4. Runs a nested loop structure where the outer loop `i` iterates over rows and the inner loop `j` iterates over columns, reading each element value into `arr[i][j]`.
  5. Displays the matrix back to the console by looping through the array again, printing elements in each row separated by spaces, and printing a newline (`endl`) after completing each row.
  6. Returns `0` to signal successful completion.

### 2. [Area of Rectangle](file:///e:/C++/cpp-practice/programs/area_of_rectangle/main.cpp)
* **Goal**: Calculate the area of a rectangle based on user-provided width and length.
* **Step-by-Step Execution**:
  1. Declares floating-point variables `length` and `width`.
  2. Asks the user to enter the length and stores the value in `length`.
  3. Asks the user to enter the width and stores the value in `width`.
  4. Computes the product `length * width` directly within the output statement and displays the calculated area.
  5. Returns `0` to terminate the program.

### 3. [Armstrong Number](file:///e:/C++/cpp-practice/programs/armstrong_number/main.cpp)
* **Goal**: Check if a user-supplied non-negative integer is an Armstrong number (a number equal to the sum of its own digits raised to the power of the number of digits).
* **Step-by-Step Execution**:
  1. Prompts the user to enter an integer.
  2. Validates that the input is a valid non-negative integer. If validation fails, prints an error message and terminates the program with return code `1`.
  3. Calls the function [isArmstrong](file:///e:/C++/cpp-practice/programs/armstrong_number/main.cpp#L15), which first saves the number as `original` and counts its digits using the helper function [countDigits](file:///e:/C++/cpp-practice/programs/armstrong_number/main.cpp#L6).
  4. In `isArmstrong`, a loop extracts each digit of the number from right to left using modulo `10` (`n % 10`), raises it to the power of the total digit count using `pow`, and rounds the result to avoid floating-point errors before adding it to `sum`. The number is then divided by `10` to strip the processed digit.
  5. Returns `true` if `sum == original`, else `false`.
  6. Prints whether the entered number is or is not an Armstrong number based on the returned boolean value.

### 4. [Average of Three](file:///e:/C++/cpp-practice/programs/average_of_three/main.cpp)
* **Goal**: Compute the mathematical average of three user-provided numbers.
* **Step-by-Step Execution**:
  1. Declares float variables `a`, `b`, `c`, and `average`.
  2. Prompts the user to enter three numbers, reading them into `a`, `b`, and `c` simultaneously.
  3. Calculates the average of the three numbers using the formula `(a + b + c) / 3` and assigns it to `average`.
  4. Displays the calculated average.
  5. Returns `0` to exit.

### 5. [Biggest of Three](file:///e:/C++/cpp-practice/programs/biggest_of_three/main.cpp)
* **Goal**: Compare three numbers and output the largest of them.
* **Step-by-Step Execution**:
  1. Declares integers `a`, `b`, and `c`.
  2. Asks the user to enter values for `A`, `B`, and `C` respectively.
  3. Performs conditional checks:
     - If `a` is greater than or equal to both `b` and `c`, outputs `a` as the largest.
     - Else if `b` is greater than or equal to both `a` and `c`, outputs `b` as the largest.
     - Otherwise, outputs `c` as the largest.
  4. Returns `0` to exit.

### 6. [Electricity Bill Calculator](file:///e:/C++/cpp-practice/programs/electricity_bill_calculator/main.cpp)
* **Goal**: Calculate the total electricity bill using tiered energy consumption rates, a fixed service fee, and a VAT percentage.
* **Step-by-Step Execution**:
  1. Initializes `units` to `0.0`, a fixed `demandCharge` to `50.0`, and `vatPercent` to `5.0`.
  2. Prompts the user to enter the total units consumed.
  3. Validates that the input is a valid non-negative number. If input is invalid, prints an error message and exits with status code `1`.
  4. Calls the function [calculateBill](file:///e:/C++/cpp-practice/programs/electricity_bill_calculator/main.cpp#L6) which uses conditional logic to compute the raw energy charge:
     - Up to 100 units are charged at `$5.0` per unit.
     - Next 200 units (up to 300) are charged at `$7.0` per unit.
     - Units exceeding 300 are charged at `$10.0` per unit.
  5. Calculates `subtotal` by adding the fixed `demandCharge` to the energy charge.
  6. Calculates `vatAmount` as `5%` of the subtotal, and adds it to the subtotal to find the `totalBill`.
  7. Formats the console output to display numbers with two decimal places using `fixed` and `setprecision(2)`.
  8. Displays an aligned "BILL SUMMARY" containing units consumed, energy charge, fixed fee, subtotal, VAT amount, and the total amount due.

### 7. [Even or Odd](file:///e:/C++/cpp-practice/programs/even_odd/main.cpp)
* **Goal**: Determine if a user-input integer is even or odd.
* **Step-by-Step Execution**:
  1. Declares integer variable `num`.
  2. Asks the user to enter a number and saves it in `num`.
  3. Evaluates the condition `num % 2 == 0` using the modulo operator.
  4. If the remainder is 0, prints that the number is "Even". Otherwise, prints that it is "Odd".
  5. Returns `0`.

### 8. [Leap Year Checker](file:///e:/C++/cpp-practice/programs/leap_year/main.cpp)
* **Goal**: Check if a given year is a leap year.
* **Step-by-Step Execution**:
  1. Declares integer variable `year`.
  2. Prompts the user to enter a year.
  3. Evaluates if the year is a leap year using the logical expression:
     - The year is divisible by 400 (`year % 400 == 0`), OR
     - The year is divisible by 4 but NOT divisible by 100 (`year % 4 == 0 && year % 100 != 0`).
  4. Displays a message stating whether the year is or is not a leap year.
  5. Returns `0`.

### 9. [Linear Search](file:///e:/C++/cpp-practice/programs/linear_search/main.cpp)
* **Goal**: Perform a linear search to locate a key element inside a 1D array.
* **Step-by-Step Execution**:
  1. Declares integer `n` for array size and `key` for the target value.
  2. Reads `n` from the user and declares a variable-length integer array `arr[n]`.
  3. Prompts the user to enter `n` elements, storing them sequentially inside the array using a `for` loop.
  4. Prompts the user for the search target element, storing it in `key`.
  5. Runs a `for` loop from index `0` to `n-1`. At each index, it checks if `arr[i] == key`.
  6. If a match is found, it displays "Element found at index [i]" and terminates the program using `return 0` to prevent further searching.
  7. If the loop completes and no element matches, it prints "Element not found." and returns `0`.

### 10. [Linear Search (2D Array)](file:///e:/C++/cpp-practice/programs/linear_search_algorithm_for_a_2d_array/main.cpp)
* **Goal**: Search for a target value inside a pre-populated 3x3 2D matrix.
* **Step-by-Step Execution**:
  1. Initializes a 3x3 integer matrix `arr` with static numbers from 10 to 90.
  2. Declares integer variable `target` and boolean flag `found` initialized to `false`.
  3. Prompts the user to enter the element to search for and saves it in `target`.
  4. Runs a nested loop: the outer loop iterates over the rows (`0` to `2`) and the inner loop iterates over columns (`0` to `2`).
  5. If `arr[row][col] == target`, it outputs "Element [target] found at Row [row] and Column [col].", sets `found` to `true`, and breaks out of the inner loop.
  6. Checks the `found` flag after the inner loop; if `true`, it breaks the outer loop to stop searching.
  7. If the loops complete and `found` is still `false`, it outputs that the element was not found.
  8. Returns `0`.

### 11. [Hello World (Main)](file:///e:/C++/cpp-practice/programs/main/main.cpp)
* **Goal**: A fundamental template program to output a simple greeting.
* **Step-by-Step Execution**:
  1. Includes the standard input/output stream library `<iostream>`.
  2. Enters the standard entry point `main()`.
  3. Utilizes `std::cout` to print `"Hello, World!"` followed by a newline `std::endl`.
  4. Returns `0` to denote successful completion.

### 12. [Number Guessing Game](file:///e:/C++/cpp-practice/programs/number_guessing_game/main.cpp)
* **Goal**: A console game where the user guesses a secret number with difficulty levels, limited attempts, and input sanitization.
* **Step-by-Step Execution**:
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

### 13. [Palindrome Number](file:///e:/C++/cpp-practice/programs/palidrom_number/main.cpp)
* **Goal**: Determine if an integer reads the same forwards and backwards.
* **Step-by-Step Execution**:
  1. Prompts the user to enter a number. If input is not a valid integer, displays an error and exits with code `1`.
  2. Calls the function [isPalindrome](file:///e:/C++/cpp-practice/programs/palidrom_number/main.cpp#L5).
  3. In `isPalindrome`, if the number is negative, it returns `false` (as a minus sign on the left won't match a digit on the right).
  4. Saves the value to `original` and initializes `reversed = 0`.
  5. While `n > 0`, it extracts the last digit of `n` using modulo `10` (`n % 10`), appends it to the reversed number (`reversed = reversed * 10 + lastDigit`), and updates `n` by dividing it by `10`.
  6. Returns `true` if `original == reversed`, else `false`.
  7. Prints whether the number is or is not a palindrome based on the returned value.

### 14. [Positive Negative Zero](file:///e:/C++/cpp-practice/programs/positive_negative_zero/main.cpp)
* **Goal**: Check whether a number is positive, negative, or zero.
* **Step-by-Step Execution**:
  1. Declares integer variable `num`.
  2. Asks the user to enter a number.
  3. Evaluates using an `if-else` chain:
     - If `num > 0`, outputs "Positive".
     - Else if `num < 0`, outputs "Negative".
     - Otherwise, outputs "Zero".
  4. Returns `0`.

### 15. [Quiz Test System](file:///e:/C++/cpp-practice/programs/quiz_test_system/main.cpp)
* **Goal**: Administer a 5-question computer science multiple-choice quiz with scoring and negative marking.
* **Step-by-Step Execution**:
  1. Initializes `correct = 0`, `wrong = 0`, and `score = 0.0`.
  2. Displays the quiz rules: 5 questions, +1 mark for a correct answer, and -0.25 mark for a wrong answer. Pauses the execution for the user to proceed.
  3. For each of the 5 questions:
     - Clears the console screen using `system("CLS")`.
     - Displays the question and four options.
     - Reads the user's answer choice into `answer`.
     - Calls [checkAnswer](file:///e:/C++/cpp-practice/programs/quiz_test_system/main.cpp#L6). If the user's answer matches the correct choice, it increments `correct` and returns `1.0`. If incorrect, it prints the correct answer, increments `wrong`, and returns `-0.25`.
     - Adds the returned value to `score` and pauses the screen.
  4. Clears the screen and displays the "QUIZ RESULT" summary, which shows correct answers, wrong answers, and the final score out of `5.00`.
  5. Evaluates and prints a performance rank based on the score (Excellent for `>= 4.5`, Very Good for `>= 3.5`, Passed for `>= 2.5`, otherwise Needs Practice).
  6. Pauses the screen and exits with `0`.

### 16. [Reverse a Number](file:///e:/C++/cpp-practice/programs/reverse_a_number/main.cpp)
* **Goal**: Show two different methods (mathematical and string manipulation) to reverse the digits of an integer.
* **Step-by-Step Execution**:
  1. Prompts the user to enter an integer.
  2. Calls [reverseNumber](file:///e:/C++/cpp-practice/programs/reverse_a_number/main.cpp#L7) which uses mathematical logic:
     - Initializes `reversed = 0`.
     - In a `while` loop running until `n == 0`, it extracts the last digit (`n % 10`), appends it to `reversed` (`reversed * 10 + lastDigit`), and divides `n` by `10`.
     - Returns `reversed` (works correctly for both positive and negative values).
  3. Calls [reverseNumberString](file:///e:/C++/cpp-practice/programs/reverse_a_number/main.cpp#L19) which uses string operations:
     - Checks if the number is negative (`isNegative = n < 0`).
     - Converts the absolute value of the number to a string using `to_string(abs(n))`.
     - Reverses the string using `reverse(...)` from `<algorithm>`.
     - Converts the reversed string back into an integer using `stoi(str)`.
     - Returns the result, negating it if `isNegative` is true.
  4. Displays both reversed outputs on the console.

### 17. [Simple Calculator](file:///e:/C++/cpp-practice/programs/simple_calculator/main.cpp)
* **Goal**: Perform basic arithmetic operations (+, -, *, /) using user inputs and a switch-case statement.
* **Step-by-Step Execution**:
  1. Declares double variables `num1` and `num2`, and char variable `op`.
  2. Prompts the user for the first number.
  3. Prompts the user to enter the operator character (`+`, `-`, `*`, `/`).
  4. Prompts the user for the second number.
  5. Enters a `switch (op)` statement:
     - `case '+'`: Outputs `num1 + num2`.
     - `case '-'`: Outputs `num1 - num2`.
     - `case '*'`: Outputs `num1 * num2`.
     - `case '/'`: If `num2 != 0`, outputs the quotient `num1 / num2`. Otherwise, warns that division by zero is not allowed.
     - `default`: Warns that the operator is invalid.
  6. Returns `0`.

### 18. [Snake Game](file:///e:/C++/cpp-practice/programs/snake_game/main.cpp)
* **Goal**: Play a classic console-based Snake game using real-time inputs, border wrapping, and dynamic tail growth.
* **Step-by-Step Execution**:
  1. Prompts the user to select the control method: WASD Keys or Arrow Keys, setting the global `useArrowKeys` flag.
  2. Calls [Setup](file:///e:/C++/cpp-practice/programs/snake_game/main.cpp#L24) which resets game-over state, centers the snake head position `(x, y)` on the 20x20 grid, sets the direction to STOP, generates random coordinates for the fruit `(fruitX, fruitY)`, and resets score to `0`.
  3. Enters the main game loop: `while (!gameOver)`:
     - **Draw()**: Clears the console using `system("cls")`. Renders the top hash boundary, then loops through the grid cells. Renders `"O"` for the snake head, `"F"` for the fruit, `"o"` for tail segments (by checking if the coordinates match the coordinate history array `tailX` and `tailY`), or `" "` for empty spaces. Draws side hash boundaries, the bottom boundary, and displays the current score.
     - **Input()**: Calls `_kbhit()` from `<conio.h>` to check if a key is pressed. If pressed, reads the character using `_getch()`. Maps arrow codes (retrieved via double-read if prefix is `-32` or `224`) or WASD keys to directions: UP, DOWN, LEFT, or RIGHT. Pressing `x`/`X` triggers game over.
     - **Logic()**: Updates the tail positions by shifting each coordinate element back by one index (`tailX[i] = tailX[i-1]`, etc.) to follow the head. Shifts head coordinates `(x, y)` based on the current movement direction. Wraps coordinates around if the head crosses the borders. If the head coordinates match any tail segment coordinate, sets `gameOver` to `true`. If the head hits the fruit, increments score by 10, spawns a new fruit randomly, and increments the tail size `nTail`.
     - **Sleep(100)**: Pauses execution for 100ms to maintain a consistent speed.
  4. Outputs "Game Over!" and the final score upon loop termination.

### 19. [Square of a Number](file:///e:/C++/cpp-practice/programs/square_of_number/main.cpp)
* **Goal**: Compute the mathematical square of an integer.
* **Step-by-Step Execution**:
  1. Declares integer variable `num`.
  2. Prompts the user to input a number.
  3. Computes the product `num * num` and outputs it as "Square = [result]".
  4. Returns `0`.

### 20. [Swap Numbers](file:///e:/C++/cpp-practice/programs/swap_numbers/main.cpp)
* **Goal**: Swap two variables without using a temporary third variable.
* **Step-by-Step Execution**:
  1. Declares integers `a` and `b`.
  2. Reads two values from the user.
  3. Swaps the numbers using arithmetic operations:
     - `a = a + b` (sets `a` to the sum of both numbers).
     - `b = a - b` (subtracts original `b` from the sum, saving the original `a` value in `b`).
     - `a = a - b` (subtracts new `b` [original `a`] from the sum, saving the original `b` value in `a`).
  4. Prints the swapped values of `a` and `b`.
  5. Returns `0`.

### 21. [Tic Tac Toe](file:///e:/C++/cpp-practice/programs/tic_tac_toe/main.cpp)
* **Goal**: A 2-player turn-based console Tic Tac Toe game on a 3x3 board.
* **Step-by-Step Execution**:
  1. Initializes a global 3x3 grid `board` with character representations `'1'` to `'9'`.
  2. Enters an infinite game loop in `main()` with `currentPlayer` starting as `'X'`:
     - Calls [displayBoard](file:///e:/C++/cpp-practice/programs/tic_tac_toe/main.cpp#L12) to print the grid formatted with `|` and `---` dividers.
     - Asks the current player to input a cell choice (1-9).
     - Validates choice. If out of range or if the cell is already occupied (determined by checking if the coordinate matches `'X'` or `'O'`), clears screen and loops.
     - Calls [makeMove](file:///e:/C++/cpp-practice/programs/tic_tac_toe/main.cpp#L27) to place the player's marker on the calculated coordinate: `row = (choice - 1) / 3`, `col = (choice - 1) % 3`.
     - Calls [checkWinner](file:///e:/C++/cpp-practice/programs/tic_tac_toe/main.cpp#L38) to check if any row, column, or diagonal contains matching markers. If true, prints victory message and breaks the loop.
     - Calls [isDraw](file:///e:/C++/cpp-practice/programs/tic_tac_toe/main.cpp#L56) to check if the board is full. If true, prints draw message and breaks.
     - Toggles the current player (`currentPlayer = (currentPlayer == 'X') ? 'O' : 'X'`), clears the console with `system("CLS")`, and loops.
  3. Exits with `0`.

### 22. [Vowel or Consonant](file:///e:/C++/cpp-practice/programs/vowel_consonant/main.cpp)
* **Goal**: Check if a user-supplied English letter is a vowel or consonant.
* **Step-by-Step Execution**:
  1. Declares character variable `ch`.
  2. Prompts the user to enter an alphabet letter.
  3. Checks if `ch` matches `'a'`, `'e'`, `'i'`, `'o'`, `'u'` (or their uppercase versions) using logical OR operators.
  4. If a match is found, prints "Vowel". Otherwise, prints "Consonant".
  5. Returns `0`.

---

## Getting Started

### Prerequisites

To compile and run these programs, you will need a C++ compiler (like `g++`) installed on your system.

### Compiling and Running a Program

To run any of the programs, navigate to the program's folder, compile the `main.cpp` file, and run the compiled executable. 

For example, to run the **Quiz Test System**:

1. Compile the program from the workspace root:
   ```bash
   g++ programs/quiz_test_system/main.cpp -o quiz_test_system
   ```

2. Run the executable:
   - **Windows:**
     ```powershell
     ./quiz_test_system
     ```
   - **Linux / macOS:**
     ```bash
     ./quiz_test_system
     ```
