#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    cout<<"unshorted arays is "<<endl;
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<endl;
    }
    

    for(int i = 1; i < n; i++){
    int current = arr[i];

    int  j = i-1;
    while(current < arr[j] && j>=0){
        arr[j+1] = arr[j];
        j--; 
    }

    arr[j+1] = current;
    }

    cout<<"sorted array is " << endl;
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<endl;
    }


}