# Biggest of Three

This directory contains the C++ source code for the **Biggest of Three** program.

## Goal
Compare three numbers and output the largest of them.

## Step-by-Step Execution
1. Declares integers `a`, `b`, and `c`.
2. Asks the user to enter values for `A`, `B`, and `C` respectively.
3. Performs conditional checks:
   - If `a` is greater than or equal to both `b` and `c`, outputs `a` as the largest.
   - Else if `b` is greater than or equal to both `a` and `c`, outputs `b` as the largest.
   - Otherwise, outputs `c` as the largest.
4. Returns `0` to exit.

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
