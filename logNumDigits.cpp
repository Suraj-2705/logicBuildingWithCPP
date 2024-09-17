#include<iostream>
#include<cmath>
using namespace std;

int countDigits(int n){
        if(n == 0){
        return 1;
    }
        return floor(log10(abs(n))) + 1;
    
}
int main(){
    int num;
    cout<<"enter the number: ";
    cin>>num;
    
    cout<<"number of digits: "<<countDigits(num);
    return 0;
}