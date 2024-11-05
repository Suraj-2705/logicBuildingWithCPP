#include<iostream>
using namespace std;
int findGCD(int divisor, int divident){
    if(divisor == 0){
        return divident;
    }

    findGCD(divident % divisor, divisor);
}
int main(){
    int a = 50;
    int b = 15;
int result = findGCD(a, b);
cout << "GCD is: " << result << endl;
}