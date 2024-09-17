#include<iostream>
using namespace std;
struct time{
    int hrs;
    int min;
    int sec;
};
int main(){
    time t1;

    
    t1.hrs = 12;
    t1.min = 45;
    t1.sec = 30;


    cout<<t1.hrs<<endl<<t1.min<<endl<<t1.sec;
    return 0;




}