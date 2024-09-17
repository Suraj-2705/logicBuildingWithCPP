#include<iostream>
using namespace std;
bool search(int arr[],int size , int key){
    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            return 1;
        }
        return 0;
}
}
int main(){
    int key;
    int arr[10] = {1, 2, 3, 4, 5, 5, 7, 8, 9, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << " Enter the key to be found: ";
    cin>>key;

    bool found = search(arr, 10, 7);
    if (found){
        cout << "Element is present in array";
    }else{
        cout << "Element is not present in array";
    }

}