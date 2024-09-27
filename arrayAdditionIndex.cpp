#include<iostream>
using namespace std;
void addArray(int arr[], int x[] , int n)
{
  x[0] = arr[0];

  for(int i = 0; i < n-1; i++){
    x[i+1] = arr[i+1] + x[i];
  }
}
int main()
{
    int arr[] = {2, -5, 3, 2, 4, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x[n];
    addArray(arr, x, n);
    for(int i = 0; i<n; i++){
        cout<<x[i]<<" ";
    }
}