# Simple Calculator

This directory contains the C++ source code for the **Simple Calculator** program.

## Goal
Perform basic arithmetic operations (+, -, *, /) using user inputs and a switch-case statement.

## Step-by-Step Execution
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
