#include<iostream>
using namespace std;
int main(){
    int temp;
    int x, y;

    cout<<"enter the value of x: ";
    cin>>x;
    cout<<"enter the value of y: ";
    cin>>y;

    temp = x;
    x = y;
    y = temp;
    cout<<"x = "<<x<<endl;
    cout<<"x = "<<y<<endl;


}