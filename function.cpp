#include<iostream>
using namespace std;
int average(int a, int b, int c){
    return (a+b+c)/3;
}


int main(){
    int a, b, c, d;
    cout<<"enter the numbers: "<<endl;
    cin >> a >> b >> c;

    cout<<"average is: "<<average(a, b, c);
    return 0;

}