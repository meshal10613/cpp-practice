#include <iostream>
#include <cmath>

using namespace std;

int countDigits(int n) {
    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}

bool isArmstrong(int n) {
    if (n < 0) return false;

    int original = n;
    int numDigits = countDigits(n);
    int sum = 0;

    while (n > 0) {
        int lastDigit = n % 10;
        sum += round(pow(lastDigit, numDigits));
        n /= 10;
    }

    return sum == original;
}

int main() {
    int num = 0;

    cout << "Enter a number: ";
    if (!(cin >> num) || num < 0) {
        cout << "Please enter a valid non-negative integer.\n";
        return 1;
    }

    if (isArmstrong(num)) {
        cout << num << " is an Armstrong number.\n";
    } else {
        cout << num << " is not an Armstrong number.\n";
    }

    return 0;
}
