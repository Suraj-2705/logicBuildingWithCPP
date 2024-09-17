#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
    ifstream fin("abc.txt");
    if(!fin)
    {
        cerr<<"Error opening file using constructor." << endl;
        return 1;
    }
    string line;
    while (getline(fin, line)){
        cout << line <<endl;
    }   
        fin.close();
}