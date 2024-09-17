#include<iostream>
using namespace std;
#include<string>
#include<fstream>
int main(){
    fstream file;
    file.open("abc.txt");
    string line;
    cout << "Enter a string";
    getline(cin, line);
    file>>line;
    file.close();

    fstream file1;
    file1.open
    if(!file){
        cerr<<"Error opening the file" << endl;
        return 1;
    }
        file<<line<<endl;
    cout << line << endl;
}