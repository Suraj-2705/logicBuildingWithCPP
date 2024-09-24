#include<iostream>
#include<string>
using namespace std;
void passwordMaker(string aadhar, string Pan, string num){
    cout << aadhar.substr(8, 4) + "-" + Pan.substr(5, 4) + "-" + num.substr(6, 4);
}
int main(){
    string aadhar; 
    string Pan;
    string num;
    cout << "Enter the aadhar number"<<endl;
    cin >> aadhar;

   
    cout << "Enter the PAN number"<<endl;
    cin >> Pan;

    cout << "Enter the number"<<endl;
    cin >> num;
    passwordMaker(aadhar, Pan, num);


}