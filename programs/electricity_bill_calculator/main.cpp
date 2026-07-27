#include <iostream>
#include <iomanip>

using namespace std;

double calculateBill(double units) {
    double bill = 0.0;

    if (units <= 100) {
        bill = units * 5.0;
    } else if (units <= 300) {
        bill = (100 * 5.0) + ((units - 100) * 7.0);
    } else {
        bill = (100 * 5.0) + (200 * 7.0) + ((units - 300) * 10.0);
    }

    return bill;
}

int main() {
    double units = 0.0;
    const double demandCharge = 50.0;
    const double vatPercent = 5.0;

    cout << "=== Electricity Bill Calculator ===\n\n";
    cout << "Enter total units consumed: ";

    if (!(cin >> units) || units < 0) {
        cout << "\nError: Invalid input! Please enter a non-negative number.\n";
        return 1;
    }

    double energyCharge = calculateBill(units);
    double subtotal = energyCharge + demandCharge;
    double vatAmount = (subtotal * vatPercent) / 100.0;
    double totalBill = subtotal + vatAmount;

    cout << fixed << setprecision(2);
    cout << "\n-----------------------------------\n";
    cout << "          BILL SUMMARY             \n";
    cout << "-----------------------------------\n";
    cout << "Units Consumed   : " << units << " kWh\n";
    cout << "Energy Charge    : $" << energyCharge << "\n";
    cout << "Fixed Service Fee: $" << demandCharge << "\n";
    cout << "Subtotal         : $" << subtotal << "\n";
    cout << "VAT (" << vatPercent << "%)      : $" << vatAmount << "\n";
    cout << "-----------------------------------\n";
    cout << "TOTAL AMOUNT DUE : $" << totalBill << "\n";
    cout << "-----------------------------------\n";

    return 0;
}
