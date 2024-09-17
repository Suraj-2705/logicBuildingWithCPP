#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of array"<<endl;
    cin>>n;
    int arr[n+1];
    cout<<"enter the array"<<endl;

    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"enter the kth index: ";
    int k;
    cin>>k;

    if(k<0 || k>n){
        cout<<"k is out of range"<<endl;
        return 1;
    }

    cout<<"enter the element at kth index: ";
    int element;
    cin>>element;


    for(int i = n; i>k; i--){
        arr[i] = arr[i-1];
    }

    arr[k] = element;

    cout<<"array after insertion is"<<endl;
    for(int i = 0; i<n+1; i++){
        cout<<arr[i]<<" ";
}
}