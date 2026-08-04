# Palindrome Number

This directory contains the C++ source code for the **Palindrome Number** program.

## Goal
Determine if an integer reads the same forwards and backwards.

## Step-by-Step Execution
1. Prompts the user to enter a number. If input is not a valid integer, displays an error and exits with code `1`.
2. Calls the function [isPalindrome](file:///e:/C++/cpp-practice/programs/palidrom_number/main.cpp#L5).
3. In `isPalindrome`, if the number is negative, it returns `false` (as a minus sign on the left won't match a digit on the right).
4. Saves the value to `original` and initializes `reversed = 0`.
5. While `n > 0`, it extracts the last digit of `n` using modulo `10` (`n % 10`), appends it to the reversed number (`reversed = reversed * 10 + lastDigit`), and updates `n` by dividing it by `10`.
6. Returns `true` if `original == reversed`, else `false`.
7. Prints whether the number is or is not a palindrome based on the returned value.

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
