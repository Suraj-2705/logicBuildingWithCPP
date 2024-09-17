#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Enter the dimension of the matrix (odd number): ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "The dimension must be an odd number." << endl;
        return 1;
    }

    int matrix[n][n];
    int middleIndex = n / 2;
    int rowSum = 0, colSum = 0;

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Calculate the sum of the middle row
    for (int j = 0; j < n; ++j) {
        rowSum += matrix[middleIndex][j];
    }

    // Calculate the sum of the middle column
    for (int i = 0; i < n; ++i) {
        colSum += matrix[i][middleIndex];
    }

    // Subtract the middle element (it was added twice)
    int middleElement = matrix[middleIndex][middleIndex];
    int result = rowSum + colSum - middleElement;

    cout << "The sum of the middle row and column elements is: " << result << endl;

    return 0;
}