#include<iostream>
using namespace std;
int findGCD(int divisor, int divident){
    if(divisor == 0){
        return divident;
    }

    findGCD(divident % divisor, divisor);
}
int main(){
    int a;
    int b;
    cout << "Enter the numbers: ";
    cin >> a>> b;
int result = findGCD(a, b);
cout << "GCD is: " << result << endl;
}