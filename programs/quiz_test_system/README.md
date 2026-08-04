# Quiz Test System

This directory contains the C++ source code for the **Quiz Test System** program.

## Goal
Administer a 5-question computer science multiple-choice quiz with scoring and negative marking.

## Step-by-Step Execution
1. Initializes `correct = 0`, `wrong = 0`, and `score = 0.0`.
2. Displays the quiz rules: 5 questions, +1 mark for a correct answer, and -0.25 mark for a wrong answer. Pauses the execution for the user to proceed.
3. For each of the 5 questions:
   - Clears the console screen using `system("CLS")`.
   - Displays the question and four options.
   - Reads the user's answer choice into `answer`.
   - Calls [checkAnswer](file:///e:/C++/cpp-practice/programs/quiz_test_system/main.cpp#L6). If the user's answer matches the correct choice, it increments `correct` and returns `1.0`. If incorrect, it prints the correct answer, increments `wrong`, and returns `-0.25`.
   - Adds the returned value to `score` and pauses the screen.
4. Clears the screen and displays the "QUIZ RESULT" summary, which shows correct answers, wrong answers, and the final score out of `5.00`.
5. Evaluates and prints a performance rank based on the score (Excellent for `>= 4.5`, Very Good for `>= 3.5`, Passed for `>= 2.5`, otherwise Needs Practice).
6. Pauses the screen and exits with `0`.

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
