#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter A: ";
    cin >> a;

    cout << "Enter B: ";
    cin >> b;

    cout << "Enter C: ";
    cin >> c;

    if (a >= b && a >= c)
        cout << "Largest number = " << a;
    else if (b >= a && b >= c)
        cout << "Largest number = " << b;
    else
        cout << "Largest number = " << c;

    return 0;
}
