#include<iostream>
using namespace std;
int fib(long long int n){
    if(n==1){
        return 0;
    }else if(n == 1){
        return 1;
    }else if(n > 2){
        return fib(n-1) + fib(n-2);
    }
}
int main(){
    int n;
    cin >> n;

    int s = fib(n);
    cout << s;
}