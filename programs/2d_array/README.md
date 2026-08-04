# 2D Array

This directory contains the C++ source code for the **2D Array** program.

## Goal
Dynamically prompt the user for matrix dimensions and elements, then display the resulting 2D grid.

## Step-by-Step Execution
1. Declares integers `row`, `column`, `i`, and `j` to store array dimensions and loop counters.
2. Prompts the user to enter the number of rows and columns, saving them via `cin`.
3. Declares a fixed-size 2D array `arr[100][100]` to hold up to 10,000 integer elements.
4. Runs a nested loop structure where the outer loop `i` iterates over rows and the inner loop `j` iterates over columns, reading each element value into `arr[i][j]`.
5. Displays the matrix back to the console by looping through the array again, printing elements in each row separated by spaces, and printing a newline (`endl`) after completing each row.
6. Returns `0` to signal successful completion.

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
