#include<iostream>
using namespace std;

class Customer{
    private:
    string name;
    int accno;
    float balance;
public:


void display()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Account Number: "<<accno<<endl;
    cout<<"Balance: "<<balance<<endl;
}


Customer(){
    cin>>name;
    cin>>accno;
    cin>>balance;
}


Customer(string N, int a, float b)
{
    name = N;
    accno = a;
    balance = b;

}
};

int main(){
    Customer C1;
    Customer C2 ("ABC", 111, 1000);
}
