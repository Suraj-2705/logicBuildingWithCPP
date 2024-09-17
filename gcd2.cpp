#include<iostream>
using namespace std;
int main(){
    int x, y;
    cout << "Enter the value of x and y: ";
    cin>>x>>y;

    if(y>x){
        int temp = x;
        x = y;
        y = temp;
    }

    while(y != 0){
        int r = x % y;
        x = y;
        y = r;
    
    }

    cout<<"gcd is: "<<x;
}