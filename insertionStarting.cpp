#include<iostream>
using namespace std;
int main(){
    int arr[5] {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Size of array: " << size << endl;
    int element;
    cin>>element;
    for(int i = size; i>0; i--){
        arr[i] = arr[i-1];
    }


    arr[0] = element; 
}