#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter the length of array"<< endl;
    cin>>n;

    cout<<"enter the array"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout << "unshorted array is" << endl;
    for(int i = 0; i<n ; i++){
        cout<<arr[i]<<" ";
    } 

    int temp;
    int flag = 0;

    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){

                //swap
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
        }
        
    }
    if (flag == 0){
            cout<<"array is already shorted"<<endl;
            break;
        }
}

    //print the array

    cout<<"shorted array is "<<endl;
    for(int i = 0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}