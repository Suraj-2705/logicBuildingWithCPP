#include<iostream>
using namespace std;
int main(){
    int x[] = {1,5,7,4,6,9,4,3};
    int n = sizeof(x)/sizeof(x[0]);
    int i;
    x[n]=56;
    int n2=n+1;

    for(i=0; i<n2; i++){
        cout<<x[i]<<" ";
    }
    return 0;
}