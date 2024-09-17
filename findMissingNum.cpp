#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int n) {
    // Calculate the sum of first N natural numbers
    int totalSum = (n * (n + 1)) / 2;

    // Calculate the sum of the array elements
    int arrSum = 0;
    for (int i = 0; i < n - 1; i++) {
        arrSum += arr[i];
    }

    // The missing number is the difference between totalSum and arrSum
    return totalSum - arrSum;
}

int main() {
    int n;
    
    // Input the value of N
    cout << "Enter the value of N: ";
    cin >> n;

    // Declare an array of size N-1
    int arr[n-1];

    // Input elements in the array
    cout << "Enter " << n-1 << " elements of the array: ";
    for (int i = 0; i < n-1; i++) {
        cin >> arr[i];
    }

    // Find and display the missing number
    int missingNumber = findMissingNumber(arr, n);
    cout << "The missing number is: " << missingNumber << endl;

    return 0;
}