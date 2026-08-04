# Swap Numbers

This directory contains the C++ source code for the **Swap Numbers** program.

## Goal
Swap two variables without using a temporary third variable.

## Step-by-Step Execution
1. Declares integers `a` and `b`.
2. Reads two values from the user.
3. Swaps the numbers using arithmetic operations:
   - `a = a + b` (sets `a` to the sum of both numbers).
   - `b = a - b` (subtracts original `b` from the sum, saving the original `a` value in `b`).
   - `a = a - b` (subtracts new `b` [original `a`] from the sum, saving the original `b` value in `a`).
4. Prints the swapped values of `a` and `b`.
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
