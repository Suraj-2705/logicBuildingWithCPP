#include<iostream>
using namespace std;
int main(){
    long long int n;
    cout<<"enter the number of elements";
    cin>>n;
    long long int a = 0, b = 1, c;
    if(n==1){
        cout<<a<<" ";
     }

    else if(n==2){
        cout<<a<<" "<<b<<" ";
     }
     else if(n>2){
         for(int i = 0; i<n-2; i++){
            c = a+b;
            cout<<c<<" ";
            a = b;
            b = c;
         }
     }

}