#include<iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;
    cout<<"enter the value of n: ";
    cin>>n;

    int arr[n];
    for(int i = 0; i<n-1; i++){
        cout<<"enter the value of arr["<<i<<"] : ";
        cin>>arr[i];
    
    }
    int sumN = (n*(n+1))/2;
    
    for(int i = 0; i<n-1; i++){
        sum = sum + arr[i];
    }

    int x = sumN - sum;

    cout<<x;
    return 0;
}