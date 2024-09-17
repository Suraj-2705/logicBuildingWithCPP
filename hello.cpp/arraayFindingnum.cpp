#include<iostream>
using namespace std;
int main(){
    int a[] = {5, 20, 6, 8, 35, 18, 72};
    int n = sizeof(a)/sizeof(a[0]);
    int i;
    int num = 35;
    for(i=0; i<n; i++){
        if(num == a[i]){
            cout<<"number found at position: "<<i+1;
            break;
        }
    }
}