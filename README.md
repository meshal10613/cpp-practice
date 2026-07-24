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
    ├── average_of_three/
    │   └── main.cpp
    ├── biggest_of_three/
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
    ├── positive_negative_zero/
    │   └── main.cpp
    ├── quiz_test_system/
    │   └── main.cpp
    ├── simple_calculator/
    │   └── main.cpp
    ├── square_of_number/
    │   └── main.cpp
    ├── swap_numbers/
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
| **Average of Three** | Calculates the average of three input numbers. | [main.cpp](file:///e:/C++/cpp-practice/programs/average_of_three/main.cpp) |
| **Biggest of Three** | Compares three numbers and outputs the largest one. | [main.cpp](file:///e:/C++/cpp-practice/programs/biggest_of_three/main.cpp) |
| **Even or Odd** | Checks if an integer entered by the user is even or odd. | [main.cpp](file:///e:/C++/cpp-practice/programs/even_odd/main.cpp) |
| **Leap Year Checker** | Determines whether a given year is a leap year. | [main.cpp](file:///e:/C++/cpp-practice/programs/leap_year/main.cpp) |
| **Linear Search** | Searches for a target element in a 1D array using the linear search algorithm. | [main.cpp](file:///e:/C++/cpp-practice/programs/linear_search/main.cpp) |
| **Linear Search (2D Array)** | Searches for a target element in a 2D matrix and displays its row and column indices. | [main.cpp](file:///e:/C++/cpp-practice/programs/linear_search_algorithm_for_a_2d_array/main.cpp) |
| **Hello World (Main)** | A simple template program that outputs "Hello, World!". | [main.cpp](file:///e:/C++/cpp-practice/programs/main/main.cpp) |
| **Positive Negative Zero** | Identifies if a number is positive, negative, or zero. | [main.cpp](file:///e:/C++/cpp-practice/programs/positive_negative_zero/main.cpp) |
| **Quiz Test System** | Interactive console-based multiple-choice quiz system with score tracking, negative marking, and performance evaluation. | [main.cpp](file:///e:/C++/cpp-practice/programs/quiz_test_system/main.cpp) |
| **Simple Calculator** | Implements basic arithmetic operations (`+`, `-`, `*`, `/`) using a switch case. | [main.cpp](file:///e:/C++/cpp-practice/programs/simple_calculator/main.cpp) |
| **Square of a Number** | Computes and displays the square of an input integer. | [main.cpp](file:///e:/C++/cpp-practice/programs/square_of_number/main.cpp) |
| **Swap Numbers** | Swaps the values of two variables without using a temporary helper variable. | [main.cpp](file:///e:/C++/cpp-practice/programs/swap_numbers/main.cpp) |
| **Vowel or Consonant** | Checks if an input alphabet character is a vowel or a consonant. | [main.cpp](file:///e:/C++/cpp-practice/programs/vowel_consonant/main.cpp) |

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
