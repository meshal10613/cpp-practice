#include <iostream>
using namespace std;

int main() {
    int row, column;

    cout << "Enter the number of rows: ";
    cin >> row;

    cout << "Enter the number of columns: ";
    cin >> column;

    int arr[100][100];

    cout << endl << "Enter the elements of the 2D array:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    cout << "\nThe 2D array is:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
