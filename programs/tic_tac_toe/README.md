# Tic Tac Toe

This directory contains the C++ source code for the **Tic Tac Toe** program.

## Goal
A 2-player turn-based console Tic Tac Toe game on a 3x3 board.

## Step-by-Step Execution
1. Initializes a global 3x3 grid `board` with character representations `'1'` to `'9'`.
2. Enters an infinite game loop in `main()` with `currentPlayer` starting as `'X'`:
   - Calls [displayBoard](file:///e:/C++/cpp-practice/programs/tic_tac_toe/main.cpp#L12) to print the grid formatted with `|` and `---` dividers.
   - Asks the current player to input a cell choice (1-9).
   - Validates choice. If out of range or if the cell is already occupied (determined by checking if the coordinate matches `'X'` or `'O'`), clears screen and loops.
   - Calls [makeMove](file:///e:/C++/cpp-practice/programs/tic_tac_toe/main.cpp#L27) to place the player's marker on the calculated coordinate: `row = (choice - 1) / 3`, `col = (choice - 1) % 3`.
   - Calls [checkWinner](file:///e:/C++/cpp-practice/programs/tic_tac_toe/main.cpp#L38) to check if any row, column, or diagonal contains matching markers. If true, prints victory message and breaks the loop.
   - Calls [isDraw](file:///e:/C++/cpp-practice/programs/tic_tac_toe/main.cpp#L56) to check if the board is full. If true, prints draw message and breaks.
   - Toggles the current player (`currentPlayer = (currentPlayer == 'X') ? 'O' : 'X'`), clears the console with `system("CLS")`, and loops.
3. Exits with `0`.

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
