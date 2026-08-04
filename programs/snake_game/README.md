# Snake Game

This directory contains the C++ source code for the **Snake Game** program.

## Goal
Play a classic console-based Snake game using real-time inputs, border wrapping, and dynamic tail growth.

## Step-by-Step Execution
1. Prompts the user to select the control method: WASD Keys or Arrow Keys, setting the global `useArrowKeys` flag.
2. Calls [Setup](file:///e:/C++/cpp-practice/programs/snake_game/main.cpp#L24) which resets game-over state, centers the snake head position `(x, y)` on the 20x20 grid, sets the direction to STOP, generates random coordinates for the fruit `(fruitX, fruitY)`, and resets score to `0`.
3. Enters the main game loop: `while (!gameOver)`:
   - **Draw()**: Clears the console using `system("cls")`. Renders the top hash boundary, then loops through the grid cells. Renders `"O"` for the snake head, `"F"` for the fruit, `"o"` for tail segments (by checking if the coordinates match the coordinate history array `tailX` and `tailY`), or `" "` for empty spaces. Draws side hash boundaries, the bottom boundary, and displays the current score.
   - **Input()**: Calls `_kbhit()` from `<conio.h>` to check if a key is pressed. If pressed, reads the character using `_getch()`. Maps arrow codes (retrieved via double-read if prefix is `-32` or `224`) or WASD keys to directions: UP, DOWN, LEFT, or RIGHT. Pressing `x`/`X` triggers game over.
   - **Logic()**: Updates the tail positions by shifting each coordinate element back by one index (`tailX[i] = tailX[i-1]`, etc.) to follow the head. Shifts head coordinates `(x, y)` based on the current movement direction. Wraps coordinates around if the head crosses the borders. If the head coordinates match any tail segment coordinate, sets `gameOver` to `true`. If the head hits the fruit, increments score by 10, spawns a new fruit randomly, and increments the tail size `nTail`.
   - **Sleep(100)**: Pauses execution for 100ms to maintain a consistent speed.
4. Outputs "Game Over!" and the final score upon loop termination.

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
