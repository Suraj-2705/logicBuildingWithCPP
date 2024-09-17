#include<iostream>
using namespace std;
struct contact
{
    int area_code;
    int exchange;
    int number;

}c1, c2;


int main(){
    //struct contact c1, c2;  this the another way 
    c1 = {100, 777, 897959};
    /*c1.area_code = 100;
    c1.exchange = 777;    another way of performing it 
    c1.number = 897959;*/
    cout<<"your contact number";
    cout<<"("<<c1.area_code<<")"<<c1.exchange<<" "<<c1.number<<endl;
    cout<<"enter area code";
    cin>>c2.area_code;
    cout<<"enter exchange code";
    cin>>c2.exchange;
    cout<<"enter number";
    cin>>c2.number;

    cout<<"("<<c2.area_code<<")"<<c2.exchange<<" "<<c2.number<<endl;

}