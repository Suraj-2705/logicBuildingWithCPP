#include <iostream>
using namespace std;

int main() {
    int n;

    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    // Input the array elements
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize maxElement and minElement with the first element of the array
    int maxElement = arr[0];
    int minElement = arr[0];

    // Find the maximum and minimum elements in the array
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
    }

    // Calculate the sum and product of the maximum and minimum elements
    int sum = maxElement + minElement;
    int product = maxElement * minElement;

    // Display the results
    cout << "Maximum element: " << maxElement << endl;
    cout << "Minimum element: " << minElement << endl;
    cout << "Sum of max and min elements: " << sum << endl;
    cout << "Product of max and min elements: " << product << endl;

    return 0;
}