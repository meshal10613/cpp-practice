# Linear Search (2D Array)

This directory contains the C++ source code for the **Linear Search (2D Array)** program.

## Goal
Search for a target value inside a pre-populated 3x3 2D matrix.

## Step-by-Step Execution
1. Initializes a 3x3 integer matrix `arr` with static numbers from 10 to 90.
2. Declares integer variable `target` and boolean flag `found` initialized to `false`.
3. Prompts the user to enter the element to search for and saves it in `target`.
4. Runs a nested loop: the outer loop iterates over the rows (`0` to `2`) and the inner loop iterates over columns (`0` to `2`).
5. If `arr[row][col] == target`, it outputs "Element [target] found at Row [row] and Column [col].", sets `found` to `true`, and breaks out of the inner loop.
6. Checks the `found` flag after the inner loop; if `true`, it breaks the outer loop to stop searching.
7. If the loops complete and `found` is still `false`, it outputs that the element was not found.
8. Returns `0`.

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
