#include<iostream>
using namespace std;
int pow(int a, int b){
    if(b==0){
        return 1;
    }else if(b == 1){
        return a;
    }else if(b>1){
       return a * pow(a,b-1);
    }
}
int main(){
    int a, b;
    cin >> a >> b;

    int s = pow(a, b);
    cout << s << endl;
}