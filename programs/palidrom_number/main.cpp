#include <iostream>

using namespace std;

bool isPalindrome(int n) {
    if (n < 0) return false;

    int original = n;
    int reversed = 0;

    while (n > 0) {
        int lastDigit = n % 10;
        reversed = reversed * 10 + lastDigit;
        n /= 10;
    }

    return original == reversed;
}

int main(){
    int num = 0;

    cout << "Enter a number: ";
    if (!(cin >> num)) {
        cout << "Invalid input! Please enter a valid integer.\n";
        return 1;
    }

    if (isPalindrome(num)) {
        cout << num << " is a palindrome number.\n";
    } else {
        cout << num << " is not a palindrome number.\n";
    }

	return 0;
}
