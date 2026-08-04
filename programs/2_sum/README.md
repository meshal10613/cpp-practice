# Two Sum

This directory contains the C++ source code for the **Two Sum** program.

## Goal
Given an array of integers and a target sum, find and print the indices of the two numbers that add up to the target.

## Code Reference
- [main.cpp](main.cpp)

## Step-by-Step Explanation
1. **Helper Function `twoSum`**:
   - Takes a `vector<int>& arr` and an integer `target`.
   - Creates a vector of pairs `nums` to store the value and its original index so that sorting does not lose index information.
   - Sorts the `nums` vector in ascending order based on values.
   - Initializes two pointers: `left` at the beginning (`0`) and `right` at the end (`nums.size() - 1`).
   - Runs a `while` loop as long as `left < right`:
     - Calculates the sum of values at the two pointers: `sum = nums[left].first + nums[right].first`.
     - If `sum == target`, returns the original indices `{nums[left].second, nums[right].second}`.
     - If `sum < target`, increments the `left` pointer to increase the sum.
     - If `sum > target`, decrements the `right` pointer to decrease the sum.
   - If no pair matches, returns an empty vector `{}`.
2. **Main Function**:
   - Initializes a test array `arr = {2, 7, 11, 15}` and a target value `9`.
   - Calls the `twoSum` function.
   - Outputs the indices of the two numbers (in this case, `0 1` corresponding to `2` and `7`).
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
