#include <iostream>
using namespace std;

int main() {
    float a, b, c, average;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    average = (a + b + c) / 3;

    cout << "Average = " << average;

    return 0;
}
