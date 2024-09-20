#include<iostream>
using namespace std;
int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int sp = (low-1);
    for(int fp = low; fp<=high; fp++){
        if(arr[fp] <= pivot){
            sp++;
            if(arr[sp] > arr[fp])
            {
                swap(arr[sp], arr[fp]);
            }
        }
    }
    return(sp);
}

void quickSort(int arr[], int low, int high){
    if(low <= high){
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
}
}

int main(){
    int arr[] = {3, 5, 1, 2 , 3,8,9 ,6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);

    int low = 0;
    int high = n-1;
    
    quickSort(arr, low, high);
    cout << "quick sorted array"<<endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
