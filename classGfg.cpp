#include<iostream>
using namespace std;
class Acc{
    public:
    string Name;
    int Age;
    int amount;

    void setdata(string n = "Prashant", int a = 26, int amt = 2000){
        Name = n;
        Age = a;
        amount = amt;
    }

    void display(){
        cout<<"Name: "<<Name<<endl;
        cout<<"Age: "<<Age<<endl;
        cout << "Amount: " << amount << endl;
    }
};
int main(){
    Acc obj1;
    obj1.setdata();
    obj1.display();
    return 0;
}