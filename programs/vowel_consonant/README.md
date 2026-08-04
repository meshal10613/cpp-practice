# Vowel or Consonant

This directory contains the C++ source code for the **Vowel or Consonant** program.

## Goal
Check if a user-supplied English letter is a vowel or consonant.

## Step-by-Step Execution
1. Declares character variable `ch`.
2. Prompts the user to enter an alphabet letter.
3. Checks if `ch` matches `'a'`, `'e'`, `'i'`, `'o'`, `'u'` (or their uppercase versions) using logical OR operators.
4. If a match is found, prints "Vowel". Otherwise, prints "Consonant".
5. Returns `0`.

---

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
