#include<iostream>
using namespace std;
int  abc(int x){
    if(x == 1){
        return 1;
    }

    x+abc(x-1);
}

int main(){
    int res = abc(5);
    cout << res;
}