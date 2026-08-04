# Three Sum

This directory contains the C++ source code for the **Three Sum** program.

## Goal
Given an array of integers and a target sum, find and print all unique triplets (groups of three numbers) that add up to the target.

## Code Reference
- [main.cpp](main.cpp)

## Step-by-Step Explanation
1. **Helper Function `threeSum`**:
   - Takes a `vector<int>& arr` and an integer `target`.
   - Sorts the input array `arr` in ascending order (crucial for the two-pointer technique).
   - Iterates through the array using a loop variable `i` from `0` to `n - 3`:
     - Initializes a `left` pointer at `i + 1` and a `right` pointer at `n - 1`.
     - Runs a nested `while` loop as long as `left < right`:
       - Calculates the sum of elements at the three indices: `sum = arr[i] + arr[left] + arr[right]`.
       - If `sum == target`, a matching triplet is found. It adds the triplet `{arr[i], arr[left], arr[right]}` to the `result` vector, then increments `left` and decrements `right` to continue looking for other possibilities.
       - If `sum < target`, increments the `left` pointer to increase the sum.
       - If `sum > target`, decrements the `right` pointer to decrease the sum.
   - Returns the `result` vector containing all found triplets.
2. **Main Function**:
   - Initializes a test array `arr = {2, 7, 11, 15, 8, 5, 3, 1}` and a target value `10`.
   - Calls the `threeSum` function.
   - Loops through the returned triplets and prints each number separated by a space.
   - Returns `0` to signal successful completion.

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
