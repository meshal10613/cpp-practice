# Even or Odd

This directory contains the C++ source code for the **Even or Odd** program.

## Goal
Determine if a user-input integer is even or odd.

## Step-by-Step Execution
1. Declares integer variable `num`.
2. Asks the user to enter a number and saves it in `num`.
3. Evaluates the condition `num % 2 == 0` using the modulo operator.
4. If the remainder is 0, prints that the number is "Even". Otherwise, prints that it is "Odd".
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
