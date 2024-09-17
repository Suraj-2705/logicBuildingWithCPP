#include<iostream>
using namespace std;
void sorting(int arr[], int n){
    int flag = 0;
    for(int i = 0; i < n-1; i++ ){
        for(int j = 0; j < n-j-1; j++){

            if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j+1] = temp;
            flag = 1;    
            }


    }
                if(flag = 0){
                cout<<"array is already sorted";
                break;
            }
}
    
}


int main(){
    int n;
    cout << "enter the length of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the array"<<endl;
    int i = 0;
    int j = 0;
    for(i = 0; i < n; i++){
        cin>>arr[i];
    }

    cout<<"unsorted array is"<<endl;
    for(i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }


    cout<<"sorted array is"<<endl;
    sorting(arr, n);
    for(int i = 0; i < n; i++){
    cout<<arr[i];
    }


}