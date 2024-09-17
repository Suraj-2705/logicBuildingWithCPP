#include<iostream>
using namespace std;
int main(){
    int a, b, gcd;
    cout << "Enter the first number: ";
    cin>>a;
    cout<<" enter the second number";
    cin>>b;


    if(b>a){
        int temp = a;
        a = b;
        b = temp;
    }

    for(int i = 1; i<=b; i++){
        if(a%i==0 && b%i==0){
            gcd = i;
        }
    }

    cout<<"gcd is: "<<gcd<<endl;

    int lcm;

    lcm = (a*b)/gcd;

    cout << "lcm is: " <<lcm;
}