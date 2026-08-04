# Linear Search

This directory contains the C++ source code for the **Linear Search** program.

## Goal
Perform a linear search to locate a key element inside a 1D array.

## Step-by-Step Execution
1. Declares integer `n` for array size and `key` for the target value.
2. Reads `n` from the user and declares a variable-length integer array `arr[n]`.
3. Prompts the user to enter `n` elements, storing them sequentially inside the array using a `for` loop.
4. Prompts the user for the search target element, storing it in `key`.
5. Runs a `for` loop from index `0` to `n-1`. At each index, it checks if `arr[i] == key`.
6. If a match is found, it displays "Element found at index [i]" and terminates the program using `return 0` to prevent further searching.
7. If the loop completes and no element matches, it prints "Element not found." and returns `0`.

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
