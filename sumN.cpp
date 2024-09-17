#include<iostream>
using namespace std;
int SUM(int n){
    if(n==1){
        return 1;
    }else{
        return n+SUM(n-1);

    }
}
int main(){
    int n;
    cin>>n;
    int s = SUM(n);
    cout<<s;
}