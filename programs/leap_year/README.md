# Leap Year Checker

This directory contains the C++ source code for the **Leap Year Checker** program.

## Goal
Check if a given year is a leap year.

## Step-by-Step Execution
1. Declares integer variable `year`.
2. Prompts the user to enter a year.
3. Evaluates if the year is a leap year using the logical expression:
   - The year is divisible by 400 (`year % 400 == 0`), OR
   - The year is divisible by 4 but NOT divisible by 100 (`year % 4 == 0 && year % 100 != 0`).
4. Displays a message stating whether the year is or is not a leap year.
5. Returns `0`.

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
