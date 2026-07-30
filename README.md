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
| **2D Array** | Declares a 2D array of user-defined size, takes input for its elements, and displays the array. | [main.cpp](programs/2d_array/main.cpp) |
| **Area of Rectangle** | Computes the area of a rectangle given its length and width. | [main.cpp](programs/area_of_rectangle/main.cpp) |
| **Armstrong Number** | Checks whether a given non-negative integer is an Armstrong number. | [main.cpp](programs/armstrong_number/main.cpp) |
| **Average of Three** | Calculates the average of three input numbers. | [main.cpp](programs/average_of_three/main.cpp) |
| **Biggest of Three** | Compares three numbers and outputs the largest one. | [main.cpp](programs/biggest_of_three/main.cpp) |
| **Electricity Bill Calculator** | Calculates electricity bill based on tiered unit consumption rates, fixed fee, and VAT. | [main.cpp](programs/electricity_bill_calculator/main.cpp) |
| **Even or Odd** | Checks if an integer entered by the user is even or odd. | [main.cpp](programs/even_odd/main.cpp) |
| **Leap Year Checker** | Determines whether a given year is a leap year. | [main.cpp](programs/leap_year/main.cpp) |
| **Linear Search** | Searches for a target element in a 1D array using the linear search algorithm. | [main.cpp](programs/linear_search/main.cpp) |
| **Linear Search (2D Array)** | Searches for a target element in a 2D matrix and displays its row and column indices. | [main.cpp](programs/linear_search_algorithm_for_a_2d_array/main.cpp) |
| **Hello World (Main)** | A simple template program that outputs "Hello, World!". | [main.cpp](programs/main/main.cpp) |
| **Number Guessing Game** | Interactive console game where players guess a random number (1-100) with difficulty levels. | [main.cpp](programs/number_guessing_game/main.cpp) |
| **Palindrome Number** | Checks if an integer reads the same forwards and backwards. | [main.cpp](programs/palidrom_number/main.cpp) |
| **Positive Negative Zero** | Identifies if a number is positive, negative, or zero. | [main.cpp](programs/positive_negative_zero/main.cpp) |
| **Quiz Test System** | Interactive console-based multiple-choice quiz system with score tracking, negative marking, and performance evaluation. | [main.cpp](programs/quiz_test_system/main.cpp) |
| **Reverse a Number** | Reverses the digits of an integer using mathematical and string-reversal methods. | [main.cpp](programs/reverse_a_number/main.cpp) |
| **Simple Calculator** | Implements basic arithmetic operations (`+`, `-`, `*`, `/`) using a switch case. | [main.cpp](programs/simple_calculator/main.cpp) |
| **Square of a Number** | Computes and displays the square of an input integer. | [main.cpp](programs/square_of_number/main.cpp) |
| **Swap Numbers** | Swaps the values of two variables without using a temporary helper variable. | [main.cpp](programs/swap_numbers/main.cpp) |
| **Tic Tac Toe** | A 2-player console-based Tic Tac Toe game played on a 3x3 grid with win/draw detection and screen clearing. | [main.cpp](programs/tic_tac_toe/main.cpp) |
| **Vowel or Consonant** | Checks if an input alphabet character is a vowel or a consonant. | [main.cpp](programs/vowel_consonant/main.cpp) |

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
