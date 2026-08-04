# Armstrong Number

This directory contains the C++ source code for the **Armstrong Number** program.

## Goal
Check if a user-supplied non-negative integer is an Armstrong number (a number equal to the sum of its own digits raised to the power of the number of digits).

## Step-by-Step Execution
1. Prompts the user to enter an integer.
2. Validates that the input is a valid non-negative integer. If validation fails, prints an error message and terminates the program with return code `1`.
3. Calls the function [isArmstrong](file:///e:/C++/cpp-practice/programs/armstrong_number/main.cpp#L15), which first saves the number as `original` and counts its digits using the helper function [countDigits](file:///e:/C++/cpp-practice/programs/armstrong_number/main.cpp#L6).
4. In `isArmstrong`, a loop extracts each digit of the number from right to left using modulo `10` (`n % 10`), raises it to the power of the total digit count using `pow`, and rounds the result to avoid floating-point errors before adding it to `sum`. The number is then divided by `10` to strip the processed digit.
5. Returns `true` if `sum == original`, else `false`.
6. Prints whether the entered number is or is not an Armstrong number based on the returned boolean value.

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
