# Electricity Bill Calculator

This directory contains the C++ source code for the **Electricity Bill Calculator** program.

## Goal
Calculate the total electricity bill using tiered energy consumption rates, a fixed service fee, and a VAT percentage.

## Step-by-Step Execution
1. Initializes `units` to `0.0`, a fixed `demandCharge` to `50.0`, and `vatPercent` to `5.0`.
2. Prompts the user to enter the total units consumed.
3. Validates that the input is a valid non-negative number. If input is invalid, prints an error message and exits with status code `1`.
4. Calls the function [calculateBill](file:///e:/C++/cpp-practice/programs/electricity_bill_calculator/main.cpp#L6) which uses conditional logic to compute the raw energy charge:
   - Up to 100 units are charged at `$5.0` per unit.
   - Next 200 units (up to 300) are charged at `$7.0` per unit.
   - Units exceeding 300 are charged at `$10.0` per unit.
5. Calculates `subtotal` by adding the fixed `demandCharge` to the energy charge.
6. Calculates `vatAmount` as `5%` of the subtotal, and adds it to the subtotal to find the `totalBill`.
7. Formats the console output to display numbers with two decimal places using `fixed` and `setprecision(2)`.
8. Displays an aligned "BILL SUMMARY" containing units consumed, energy charge, fixed fee, subtotal, VAT amount, and the total amount due.

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
