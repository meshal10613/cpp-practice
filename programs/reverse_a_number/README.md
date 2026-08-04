# Reverse a Number

This directory contains the C++ source code for the **Reverse a Number** program.

## Goal
Show two different methods (mathematical and string manipulation) to reverse the digits of an integer.

## Step-by-Step Execution
1. Prompts the user to enter an integer.
2. Calls [reverseNumber](file:///e:/C++/cpp-practice/programs/reverse_a_number/main.cpp#L7) which uses mathematical logic:
   - Initializes `reversed = 0`.
   - In a `while` loop running until `n == 0`, it extracts the last digit (`n % 10`), appends it to `reversed` (`reversed * 10 + lastDigit`), and divides `n` by `10`.
   - Returns `reversed` (works correctly for both positive and negative values).
3. Calls [reverseNumberString](file:///e:/C++/cpp-practice/programs/reverse_a_number/main.cpp#L19) which uses string operations:
   - Checks if the number is negative (`isNegative = n < 0`).
   - Converts the absolute value of the number to a string using `to_string(abs(n))`.
   - Reverses the string using `reverse(...)` from `<algorithm>`.
   - Converts the reversed string back into an integer using `stoi(str)`.
   - Returns the result, negating it if `isNegative` is true.
4. Displays both reversed outputs on the console.

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
