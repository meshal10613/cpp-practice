# C++ Practice Programs 🚀

A curated collection of foundational C++ programs designed for learning, practicing, and mastering key programming concepts. This repository ranges from basic syntax exercises to search algorithms, mathematical calculations, and interactive console-based games.

Each program is organized in its own directory under the `programs/` folder, containing the source code and a detailed walkthrough of the implementation.

---

## 📂 Repository Structure

All programs are structured as follows:
```text
cpp-practice/
├── README.md             # Main navigation hub
└── programs/             # Program directories
    ├── [program_name]/
    │   ├── main.cpp      # Source code
    │   └── README.md     # Detailed step-by-step explanation
```

---

## 🗂️ Categorized Programs Index

Here is the complete list of the **24 programs** available in this repository, organized by concept:

### 1. Basic Concepts & Math
Simple programs demonstrating variables, conditionals, basic operators, and arithmetic.

| Program | Description | Docs | Source |
| :--- | :--- | :---: | :---: |
| **Hello World (Main)** | A template program outputting "Hello, World!". | [README](programs/main/README.md) | [main.cpp](programs/main/main.cpp) |
| **Area of Rectangle** | Computes the area of a rectangle from its length and width. | [README](programs/area_of_rectangle/README.md) | [main.cpp](programs/area_of_rectangle/main.cpp) |
| **Average of Three** | Calculates the average of three input numbers. | [README](programs/average_of_three/README.md) | [main.cpp](programs/average_of_three/main.cpp) |
| **Biggest of Three** | Compares three numbers and outputs the largest one. | [README](programs/biggest_of_three/README.md) | [main.cpp](programs/biggest_of_three/main.cpp) |
| **Even or Odd** | Checks if an integer entered by the user is even or odd. | [README](programs/even_odd/README.md) | [main.cpp](programs/even_odd/main.cpp) |
| **Leap Year Checker** | Determines whether a given year is a leap year. | [README](programs/leap_year/README.md) | [main.cpp](programs/leap_year/main.cpp) |
| **Positive Negative Zero** | Identifies if a number is positive, negative, or zero. | [README](programs/positive_negative_zero/README.md) | [main.cpp](programs/positive_negative_zero/main.cpp) |
| **Square of a Number** | Computes and displays the square of an input integer. | [README](programs/square_of_number/README.md) | [main.cpp](programs/square_of_number/main.cpp) |
| **Swap Numbers** | Swaps the values of two variables without a third variable. | [README](programs/swap_numbers/README.md) | [main.cpp](programs/swap_numbers/main.cpp) |
| **Vowel or Consonant** | Checks if an input alphabet character is a vowel or consonant. | [README](programs/vowel_consonant/README.md) | [main.cpp](programs/vowel_consonant/main.cpp) |

### 2. Math Algorithms & Calculations
A bit more advanced logic including loops, digit extractions, and switch-case control flows.

| Program | Description | Docs | Source |
| :--- | :--- | :---: | :---: |
| **Armstrong Number** | Checks if a non-negative integer is an Armstrong number. | [README](programs/armstrong_number/README.md) | [main.cpp](programs/armstrong_number/main.cpp) |
| **Palindrome Number** | Checks if an integer reads the same forwards and backwards. | [README](programs/palidrom_number/README.md) | [main.cpp](programs/palidrom_number/main.cpp) |
| **Reverse a Number** | Reverses the digits of an integer mathematically and via strings. | [README](programs/reverse_a_number/README.md) | [main.cpp](programs/reverse_a_number/main.cpp) |
| **Electricity Bill Calculator** | Calculates tiered consumption rates with fixed fees and VAT. | [README](programs/electricity_bill_calculator/README.md) | [main.cpp](programs/electricity_bill_calculator/main.cpp) |
| **Simple Calculator** | Basic arithmetic operations (`+`, `-`, `*`, `/`) using switch-case. | [README](programs/simple_calculator/README.md) | [main.cpp](programs/simple_calculator/main.cpp) |

### 3. Arrays, Vectors & Search Algorithms
Working with 1D/2D arrays, sorting, two-pointer techniques, and basic search algorithms.

| Program | Description | Docs | Source |
| :--- | :--- | :---: | :---: |
| **2D Array** | Declares and prints a user-dimensioned 2D grid. | [README](programs/2d_array/README.md) | [main.cpp](programs/2d_array/main.cpp) |
| **Linear Search** | Searches for a target element in a 1D array. | [README](programs/linear_search/README.md) | [main.cpp](programs/linear_search/main.cpp) |
| **Linear Search (2D Array)** | Searches for a target element in a static 3x3 2D matrix. | [README](programs/linear_search_algorithm_for_a_2d_array/README.md) | [main.cpp](programs/linear_search_algorithm_for_a_2d_array/main.cpp) |
| **Two Sum** | Finds indices of two numbers that add up to a target sum. | [README](programs/2_sum/README.md) | [main.cpp](programs/2_sum/main.cpp) |
| **Three Sum** | Finds all unique triplets that add up to a target sum. | [README](programs/3_sum/README.md) | [main.cpp](programs/3_sum/main.cpp) |

### 4. Interactive Games & Terminal Systems
Fun, console-based interactive projects involving real-time inputs, loops, and states.

| Program | Description | Docs | Source |
| :--- | :--- | :---: | :---: |
| **Number Guessing Game** | Guess a random number (1-100) with custom difficulty levels. | [README](programs/number_guessing_game/README.md) | [main.cpp](programs/number_guessing_game/main.cpp) |
| **Quiz Test System** | 5-question computer science quiz with scoring and negative marks. | [README](programs/quiz_test_system/README.md) | [main.cpp](programs/quiz_test_system/main.cpp) |
| **Snake Game** | Classic console-based Snake game using WASD or arrow keys. | [README](programs/snake_game/README.md) | [main.cpp](programs/snake_game/main.cpp) |
| **Tic Tac Toe** | A 2-player turn-based board game played on a 3x3 grid. | [README](programs/tic_tac_toe/README.md) | [main.cpp](programs/tic_tac_toe/main.cpp) |

---

## 🛠️ How to Compile & Run

### Prerequisites
To build and run these programs, you need a C++ compiler installed (e.g., `g++` via GCC, Clang, or MSVC).

### Compiling and Running
1. Open a terminal.
2. Navigate to the root directory of this repository or directly to a specific program's directory.
3. Compile the `main.cpp` using:
   ```bash
   g++ programs/[program_directory]/main.cpp -o main
   ```
4. Run the compiled executable:
   - **Windows (Command Prompt / PowerShell)**:
     ```powershell
     ./main
     ```
   - **Linux / macOS**:
     ```bash
     ./main
     ```

*Note: For detailed explanations of how each program works, click the **README** link in the tables above.*
