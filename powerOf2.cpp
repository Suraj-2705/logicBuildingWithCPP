#include<iostream>
using namespace std;
bool checkPowerOfTwo(int n){
    if (n <= 0){
        return false;
    }
    else if ((n&(n-1))==0)
        return true;
        else    
            return false;
}
int main(){
    int n;
    cout << "enter the number: ";
    cin>>n;
    cout << "answer is: ";
    checkPowerOfTwo(n);

    if(1){
        cout << "true";
    }else{
        cout << "false";
    }



}