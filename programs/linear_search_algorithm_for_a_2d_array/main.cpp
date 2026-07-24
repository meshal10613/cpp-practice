#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    int target;
    bool found = false;

    cout << "Enter the element to search: ";
    cin >> target;

    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            if (arr[row][col] == target) {
                cout << "\nElement " << target << " found at Row "
                     << row << " and Column " << col << "." << endl;
                found = true;
                break;
            }
        }
        if (found)
            break;
    }

    if (!found) {
        cout << "\nElement " << target << " was not found in the array." << endl;
    }

    return 0;
}
